module explode-test
imports sunit

signature
  constructors
    If   : Exp * Exp -> Exp
    If   : Exp * Exp * Exp -> Exp
    Skip : Exp

rules

  R1 : If(c, x) -> If(c, x, Skip)
  R2 : If(c, x, Skip) -> If(c, x)

strategies

  main = 
    test-suite(!"explode-test",
	explode-test1;
	explode-test2;
	explode-test3
    )

  explode-test1 =
    apply-test(!"explode-test1a"
	      ,id#(id)
	      ,!If("a","b","c")
	      ,!If("a","b","c")
	      );
    apply-test(!"explode-test1b"
	      ,id#(id)
	      ,!"abc"
	      ,!"abc"
	      );
    apply-test(!"explode-test1c"
	      ,id#(id)
	      ,!12
	      ,!12
	      )

  explode-test2 =
    apply-test(!"explode-test2"
	      ,\ f#(xs) -> (f, xs)\
	      ,!If("a","b","c")
	      ,!("If", ["a","b","c"])
	      )

  explode-test3 =
    apply-test(!"explode-test3"
	      ,\ (f, xs) -> f#(xs) \
	      ,!("If", ["a","b","c"])
	      ,!If("a","b","c")
	      )
