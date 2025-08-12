Problem Statement
Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set:
{"Swimming", "Running", "Football"}
subject to the constraint that no two consecutive days have the same activity.
Input
A single integer n (1 ≤ n ≤ 10).
Output
Print each valid schedule on its own line, with activities separated by a single space.
After listing all schedules, print a final line: COUNT: X where X is the total number of schedules
generated.
-------------------------
Input
2
Valid schedules
Football Running
Football Swimming
Running Football
Running Swimming
Swimming Football
Swimming Running
COUNT: 6
-------------------------
formula (3*(2^(n-1)))
ex : n=3 ---> 3*(2^(3-1))=12
     n=2 ---> 3*(2^(2-1))=6
-------------------------
name : Baraa Ayman Hasan Alyazouri 
id : 20215028
