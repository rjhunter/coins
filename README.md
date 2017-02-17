# coins
Implement the classic change-making problem using greedy, and dynamic programming algorithms.

```
===
Comparing DP and Greedy for: {1, 5, 10, 25}
No differences!

===
Comparing DP and Greedy for: {1, 10, 25}
---
DP and Greedy differ for 30
DP Solution for 30 is *3* coin(s): {10, 10, 10}
Greedy Solution for 30 is *6* coin(s): {1, 1, 1, 1, 1, 25}
---
DP and Greedy differ for 31
DP Solution for 31 is *4* coin(s): {1, 10, 10, 10}
Greedy Solution for 31 is *7* coin(s): {1, 1, 1, 1, 1, 1, 25}
---
DP and Greedy differ for 32
DP Solution for 32 is *5* coin(s): {1, 1, 10, 10, 10}
Greedy Solution for 32 is *8* coin(s): {1, 1, 1, 1, 1, 1, 1, 25}
---
DP and Greedy differ for 33
DP Solution for 33 is *6* coin(s): {1, 1, 1, 10, 10, 10}
Greedy Solution for 33 is *9* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 25}
---
DP and Greedy differ for 34
DP Solution for 34 is *7* coin(s): {1, 1, 1, 1, 10, 10, 10}
Greedy Solution for 34 is *10* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 25}
---
DP and Greedy differ for 40
DP Solution for 40 is *4* coin(s): {10, 10, 10, 10}
Greedy Solution for 40 is *7* coin(s): {1, 1, 1, 1, 1, 10, 25}
---
DP and Greedy differ for 41
DP Solution for 41 is *5* coin(s): {1, 10, 10, 10, 10}
Greedy Solution for 41 is *8* coin(s): {1, 1, 1, 1, 1, 1, 10, 25}
---
DP and Greedy differ for 42
DP Solution for 42 is *6* coin(s): {1, 1, 10, 10, 10, 10}
Greedy Solution for 42 is *9* coin(s): {1, 1, 1, 1, 1, 1, 1, 10, 25}
---
DP and Greedy differ for 43
DP Solution for 43 is *7* coin(s): {1, 1, 1, 10, 10, 10, 10}
Greedy Solution for 43 is *10* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 10, 25}
---
DP and Greedy differ for 44
DP Solution for 44 is *8* coin(s): {1, 1, 1, 1, 10, 10, 10, 10}
Greedy Solution for 44 is *11* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 25}
---
DP and Greedy differ for 55
DP Solution for 55 is *4* coin(s): {10, 10, 10, 25}
Greedy Solution for 55 is *7* coin(s): {1, 1, 1, 1, 1, 25, 25}
---
DP and Greedy differ for 56
DP Solution for 56 is *5* coin(s): {1, 10, 10, 10, 25}
Greedy Solution for 56 is *8* coin(s): {1, 1, 1, 1, 1, 1, 25, 25}
---
DP and Greedy differ for 57
DP Solution for 57 is *6* coin(s): {1, 1, 10, 10, 10, 25}
Greedy Solution for 57 is *9* coin(s): {1, 1, 1, 1, 1, 1, 1, 25, 25}
---
DP and Greedy differ for 58
DP Solution for 58 is *7* coin(s): {1, 1, 1, 10, 10, 10, 25}
Greedy Solution for 58 is *10* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 25, 25}
---
DP and Greedy differ for 59
DP Solution for 59 is *8* coin(s): {1, 1, 1, 1, 10, 10, 10, 25}
Greedy Solution for 59 is *11* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 25, 25}
---
DP and Greedy differ for 65
DP Solution for 65 is *5* coin(s): {10, 10, 10, 10, 25}
Greedy Solution for 65 is *8* coin(s): {1, 1, 1, 1, 1, 10, 25, 25}
---
DP and Greedy differ for 66
DP Solution for 66 is *6* coin(s): {1, 10, 10, 10, 10, 25}
Greedy Solution for 66 is *9* coin(s): {1, 1, 1, 1, 1, 1, 10, 25, 25}
---
DP and Greedy differ for 67
DP Solution for 67 is *7* coin(s): {1, 1, 10, 10, 10, 10, 25}
Greedy Solution for 67 is *10* coin(s): {1, 1, 1, 1, 1, 1, 1, 10, 25, 25}
---
DP and Greedy differ for 68
DP Solution for 68 is *8* coin(s): {1, 1, 1, 10, 10, 10, 10, 25}
Greedy Solution for 68 is *11* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 10, 25, 25}
---
DP and Greedy differ for 69
DP Solution for 69 is *9* coin(s): {1, 1, 1, 1, 10, 10, 10, 10, 25}
Greedy Solution for 69 is *12* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 25, 25}
---
DP and Greedy differ for 80
DP Solution for 80 is *5* coin(s): {10, 10, 10, 25, 25}
Greedy Solution for 80 is *8* coin(s): {1, 1, 1, 1, 1, 25, 25, 25}
---
DP and Greedy differ for 81
DP Solution for 81 is *6* coin(s): {1, 10, 10, 10, 25, 25}
Greedy Solution for 81 is *9* coin(s): {1, 1, 1, 1, 1, 1, 25, 25, 25}
---
DP and Greedy differ for 82
DP Solution for 82 is *7* coin(s): {1, 1, 10, 10, 10, 25, 25}
Greedy Solution for 82 is *10* coin(s): {1, 1, 1, 1, 1, 1, 1, 25, 25, 25}
---
DP and Greedy differ for 83
DP Solution for 83 is *8* coin(s): {1, 1, 1, 10, 10, 10, 25, 25}
Greedy Solution for 83 is *11* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 25, 25, 25}
---
DP and Greedy differ for 84
DP Solution for 84 is *9* coin(s): {1, 1, 1, 1, 10, 10, 10, 25, 25}
Greedy Solution for 84 is *12* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 25, 25, 25}
---
DP and Greedy differ for 90
DP Solution for 90 is *6* coin(s): {10, 10, 10, 10, 25, 25}
Greedy Solution for 90 is *9* coin(s): {1, 1, 1, 1, 1, 10, 25, 25, 25}
---
DP and Greedy differ for 91
DP Solution for 91 is *7* coin(s): {1, 10, 10, 10, 10, 25, 25}
Greedy Solution for 91 is *10* coin(s): {1, 1, 1, 1, 1, 1, 10, 25, 25, 25}
---
DP and Greedy differ for 92
DP Solution for 92 is *8* coin(s): {1, 1, 10, 10, 10, 10, 25, 25}
Greedy Solution for 92 is *11* coin(s): {1, 1, 1, 1, 1, 1, 1, 10, 25, 25, 25}
---
DP and Greedy differ for 93
DP Solution for 93 is *9* coin(s): {1, 1, 1, 10, 10, 10, 10, 25, 25}
Greedy Solution for 93 is *12* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 10, 25, 25, 25}
---
DP and Greedy differ for 94
DP Solution for 94 is *10* coin(s): {1, 1, 1, 1, 10, 10, 10, 10, 25, 25}
Greedy Solution for 94 is *13* coin(s): {1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 25, 25, 25}
```
