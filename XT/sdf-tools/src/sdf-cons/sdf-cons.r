\literate[sdf-cons]

% Author: Joost Visser (Joost.Visser@cwi.nl)
% Changes by: Merijn de Jonge, Eelco Visser, and Hedzer Westra.
% Refactorings by: Eelco Visser (19/4/2001) 
% - injections not named
% Refactorings by: Eelco Visser (18/5/2001)
% - injections named by default
% - option --injections added to turn off

Add cons(...) attributes to Sdf productions.

\begin{code}
module sdf-cons
imports lib Sdf-Syntax Sdf-NormLit-Syntax prodcons.r

signature
  constructors
    Modular: Option
    Injections: Option

strategies

  sdf-cons = 
    iowrapO(sdf-cons
           ,Option("--modular",!Modular)
            + Option("--injections",!Injections)
           ,sdf-cons-usage)

  sdf-cons = 
    (store-options,id)
  ; (id, alltd(lexical-syntax(id) <+ (is-prod; prodcons)))
  ; try((option-defined(Modular), uniquify-modular))
  ; try((not(option-defined(Modular)), uniquify))

  sdf-cons-usage =
  where(
    option-defined(?Program(prog))
  ; <printnl> (stderr,
               ["usage : ", prog,
                " [-S] [-i file] [-o file] [-b] [options] [-s] [--help|-h|-?]\n\n",
		"  options \n\n",
		"  --modular    : unique names per module\n",
		"  --injections : do not generate constructors for injections"
	       ])
  ; <exit> 1
  )

(*
  sorts Grammar Production
  constructors
    lexical-syntax : List(Production)   -> Grammar
    prod           :           Symbols * Symbol * Attributes -> Production
    prod-fun       : Literal * Symbols * Symbol * Attributes -> Production

    cons           : ATerm -> Attribute
*)

strategies

  uniquify-modular = Definition(map(uniquify-module))

  uniquify = uniquify-module

// uniquifying using tables to implement a bucket sort

strategies

  uniquify-module =
    where(uniquify-prods)
  ; alltd(replace-prod)

  uniquify-prods =
    collect(prod(id,id,id))
  ; where(<table-create>"prods")
  ; map(try(add-prod))
  ; <table-getlist> "prods"
  ; map(uniquify-constr)

  add-prod =
  where(?p
  ; get-constr => c
  ; <table-push>("prods", c, p)
  )
 
  replace-prod =
    ?prod(srts, res, _)
  ; prod(id, id, at-cons(<table-get>("prods", prod(srts,res,no-attrs))))

  uniquify-constr =
    (id, reverse; [id | \ps -> <thread-map(prime-prod)> Pair(ps, 1) \ ])

rules

  prime-prod :
    Pair(p@prod(ss,res,as), n) ->
    Pair(prod(ss,res,<at-cons(!c)>as), <add> (n, 1))
    where <prime-constr> (<get-constr> p, n) => c
        ; <table-put>("prods", prod(ss,res,no-attrs), c)

  prime-constr :
    (c, n) -> <conc-strings; quote> (<de-quote> c, <int-to-string> n)
   
strategies
 
  is-prod
    = prod(id,id,id)
   <+ prod-fun(id,id,id,id)
\end{code}