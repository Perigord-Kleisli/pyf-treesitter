main = do 
  putStrLn [fmt| \
    Padding: {name:<11} {name:>11} {name:|^13} {-3:=6}
    Float Rounding: {pi:.2} 
    Representations: {v:#b} {v:#o} {v:o}A
    Grouping: {10 ^ 9 - 1:,} {2 ^ 32  -1:_b}
    Sign handling: {pi:+.3} 
  |]

  
