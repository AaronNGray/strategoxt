(**** WARNING **** THIS FILE WAS GENERATED **** DO NOT EDIT **** WARNING ****)

module bol-syntax
signature
  sorts
    BOLLambda BOLBndVar BOLVar
  constructors
      BOL_Lambda : BOLVar * List(BOLBndVar) * BOLExp -> BOLLambda
strategies
  main = id