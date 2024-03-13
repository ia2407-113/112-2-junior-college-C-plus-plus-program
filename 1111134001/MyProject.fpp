22       	 <--SHAPES
25       	 <--LINES
id1
2       	 <--TYPE
289       	 <--LEFT
150       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
91       	 <--TYPE
244       	 <--LEFT
223       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入年收入
money

id3
92       	 <--TYPE
253       	 <--LEFT
311       	 <--TOP
145       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
money
560000

id4
92       	 <--TYPE
183       	 <--LEFT
405       	 <--TOP
283       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
money|IF_LESS_EQUAL|1260000
money|IF_GREATER_EQUAL|560001

id5
0       	 <--TYPE
487       	 <--LEFT
321       	 <--TOP
124       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
money
0.05
a
id6
91       	 <--TYPE
673       	 <--LEFT
316       	 <--TOP
224       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為5%應繳稅額為
a

id7
0       	 <--TYPE
536       	 <--LEFT
417       	 <--TOP
120       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
money
0.12
b
id8
91       	 <--TYPE
846       	 <--LEFT
415       	 <--TOP
231       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為12%應繳稅額為
i

id9
92       	 <--TYPE
179       	 <--LEFT
508       	 <--TOP
290       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
money|IF_LESS_EQUAL|2520000
money|IF_GREATER_EQUAL|1260001

id10
0       	 <--TYPE
538       	 <--LEFT
518       	 <--TOP
113       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
money
0.2
c
id11
91       	 <--TYPE
843       	 <--LEFT
511       	 <--TOP
231       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為20%應繳稅額為
h

id12
92       	 <--TYPE
178       	 <--LEFT
606       	 <--TOP
290       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
money|IF_LESS_EQUAL|4720000
money|IF_GREATER_EQUAL|2520001

id13
0       	 <--TYPE
536       	 <--LEFT
612       	 <--TOP
113       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
money
0.3
d
id14
91       	 <--TYPE
841       	 <--LEFT
610       	 <--TOP
231       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為30%應繳稅額為
g

id15
92       	 <--TYPE
247       	 <--LEFT
702       	 <--TOP
152       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
money
4720001

id16
0       	 <--TYPE
535       	 <--LEFT
707       	 <--TOP
113       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
money
0.4
e
id17
0       	 <--TYPE
693       	 <--LEFT
706       	 <--TOP
100       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
e
864000
f
id18
91       	 <--TYPE
843       	 <--LEFT
703       	 <--TOP
231       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為40%應繳稅額為
f

id19
0       	 <--TYPE
695       	 <--LEFT
614       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
d
392000
g
id20
0       	 <--TYPE
689       	 <--LEFT
517       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
c
140000
h
id21
0       	 <--TYPE
696       	 <--LEFT
419       	 <--TOP
100       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
b
39200
i
id22
2       	 <--TYPE
1376       	 <--LEFT
806       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
---- LINES ---- from,to ----
id1,id2
0

id2,id3
0

id3,id5
0
YES
id3,id4
0
NO
id5,id6
0

id4,id7
0
YES
id4,id9
0
NO
id9,id10
0
YES
id9,id12
0
NO
id12,id13
0
YES
id12,id15
0
NO
id15,id16
0
YES
id16,id17
0

id17,id18
0

id13,id19
0

id19,id14
0

id10,id20
0

id20,id11
0

id7,id21
0

id21,id8
0

id6,id22
0

id8,id22
0

id11,id22
0

id14,id22
0

id18,id22
0

