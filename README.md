# hdl4shit

hdl4shit only gives you the `and`, `not`, and `or`, logic gates. Then use `chip` to make your own chips out of those fundamental three, and perhaps even a computer!!

Example:
```verilog
// nand.h4s

chip nand(a, b) -> out {
  and(a, b, andoutput) // "or" works similarly
  not(andoutput, out)
}

```

Syntax:
```verilog

chip <CHIP NAME>(<PARAMETER 1>, [PARAMETER 2], ...) -> <OUTPUT 1>, [OUTPUT 2], ... {
  <DEFINED CHIP NAME>(<PUT INTO IT ARGUEMENTS>)
  <DEFINED CHIP NAME>(<MAKE SURE TO ROUTE INTO YOUR OUTPUTS>)
}

```
