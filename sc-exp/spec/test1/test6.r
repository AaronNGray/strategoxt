module test6
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)

    Zero  : Nat
    Succ  : Nat -> Nat
    Plus  : Nat * Nat -> Nat

rules

  A : Plus(Zero, x) -> x
  B : Plus(Succ(x), y) -> Plus(x, Succ(y))

strategies
 
  repeat(s) = 
    s; repeat(s) <+ id

  eval = 
    repeat(A + B)

strategies

  main = 
    !Plus(Succ(Succ(Zero)), Succ(Zero));
    eval
