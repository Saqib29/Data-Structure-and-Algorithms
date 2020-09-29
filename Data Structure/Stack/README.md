### Infix rule:

```
1. () {} []
2. ^ 	-- R->L
3. * /  -- L->R
4. + -  -- L->R
```

### Infix to postfix Conversion

1. Print operands as they arrive
2. If stack is empty or contain a left parenthesis on top, push the incoming operator onto the stack
3. If incoming symbol is '(', push it onto stack
4. If incoming symbol is ')', pop the stack & print the operator until left parenthesis is found
5. If incoming symbol has higher precedence then the top of the stack, push it on the stack
6. If incoming symbol has lower precedence than the top of the stack, pop & print the top. Then test the incoming operator against the new top of the stack.
7. If incoming operator has equal precedence with the top of the stack, use use _associativity_ rule.
8. At the end of the expression, pop & print all operators of stack.

> > associativity `L to R` then pop & print top of the stack & then push the incoming operator, `R to L` than push the incoming operator
