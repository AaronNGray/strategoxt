module test24

signature
  constructors
    A : Exp
    B : Exp
    H : Exp -> Exp
    I : Exp -> Exp
    G : Exp * Exp -> Exp

overlays

  F(x) = G(H(x),A)

rules

  R1 : H(H(x)) -> x

  R2 : H(y) -> I(<R1; !F(<id>)> y)

strategies

  main =
    !H(H(H(B)))
    ; R2
    ; ?I(G(H(B),A))

  

