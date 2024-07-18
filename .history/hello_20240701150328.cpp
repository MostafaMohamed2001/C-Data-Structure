Problem Statement
A country decides to build a palace.

In this country, the average temperature of a point at an elevation of 
𝑥
x meters is 
𝑇
−
𝑥
×
0.006
T−x×0.006 degrees Celsius.

There are 
𝑁
N places proposed for the place. The elevation of Place 
𝑖
i is 
𝐻
𝑖
H 
i
​
  meters.

Among them, Princess Joisino orders you to select the place whose average temperature is the closest to 
𝐴
A degrees Celsius, and build the palace there.

Print the index of the place where the palace should be built.

It is guaranteed that the solution is unique.

Constraints
1
≤
𝑁
≤
1000
1≤N≤1000
0
≤
𝑇
≤
50
0≤T≤50
−
60
≤
𝐴
≤
𝑇
−60≤A≤T
0
≤
𝐻
𝑖
≤
1
0
5
0≤H 
i
​
 ≤10 
5
 
All values in input are integers.
The solution is unique.
Input
Input is given from Standard Input in the following format:

𝑁
N
𝑇
T 
𝐴
A
𝐻
1
H 
1
​
  
𝐻
2
H 
2
​
  
.
.
.
... 
𝐻
𝑁
H 
N
​
 
Output
Print the index of the place where the palace should be built.

Sample 1
Inputcopy	Outputcopy
2
12 5
1000 2000
1
The average temperature of Place 
1
1 is 
12
−
1000
×
0.006
=
6
12−1000×0.006=6 degrees Celsius.
The average temperature of Place 
2
2 is 
12
−
2000
×
0.006
=
0
12−2000×0.006=0 degrees Celsius.
Thus, the palace should be built at Place 
1
1.

Sample 2
Inputcopy	Outputcopy
3
21 -11
81234 94124 52141
3