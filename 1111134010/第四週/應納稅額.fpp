22       	 <--SHAPES
25       	 <--LINES
id1
2       	 <--TYPE
1508       	 <--LEFT
110       	 <--TOP
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
1439       	 <--LEFT
237       	 <--TOP
212       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
請輸入你的年收入:
income

id3
92       	 <--TYPE
1466       	 <--LEFT
338       	 <--TOP
148       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
income
560000

id4
0       	 <--TYPE
1130       	 <--LEFT
351       	 <--TOP
123       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
income
0.05
a
id5
92       	 <--TYPE
1390       	 <--LEFT
422       	 <--TOP
289       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
income|IF_LESS_EQUAL|1260000
income|IF_GREATER_EQUAL|560001

id6
92       	 <--TYPE
1390       	 <--LEFT
516       	 <--TOP
296       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
income|IF_LESS_EQUAL|2520000
income|IF_GREATER_EQUAL|1260001

id7
92       	 <--TYPE
1390       	 <--LEFT
616       	 <--TOP
296       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
income|IF_LESS_EQUAL|4720000
income|IF_GREATER_EQUAL|2520001

id8
92       	 <--TYPE
1466       	 <--LEFT
709       	 <--TOP
155       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
income
4720001

id9
0       	 <--TYPE
1131       	 <--LEFT
431       	 <--TOP
123       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
income
0.12
b
id10
0       	 <--TYPE
1142       	 <--LEFT
526       	 <--TOP
116       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
income
0.2
c
id11
0       	 <--TYPE
1151       	 <--LEFT
626       	 <--TOP
116       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
income
0.3
d
id12
0       	 <--TYPE
1165       	 <--LEFT
717       	 <--TOP
116       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
income
0.4
e
id13
0       	 <--TYPE
925       	 <--LEFT
430       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
b
39200
bb
id14
0       	 <--TYPE
925       	 <--LEFT
526       	 <--TOP
122       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
0.3
140000
cc
id15
0       	 <--TYPE
925       	 <--LEFT
628       	 <--TOP
111       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
c
392000
dd
id16
0       	 <--TYPE
933       	 <--LEFT
720       	 <--TOP
111       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
e
864000
ee
id17
91       	 <--TYPE
605       	 <--LEFT
344       	 <--TOP
239       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為5%應納稅額為:
a

id18
91       	 <--TYPE
599       	 <--LEFT
426       	 <--TOP
242       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為12%應納稅額為:
bb

id19
91       	 <--TYPE
599       	 <--LEFT
525       	 <--TOP
242       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為20%應納稅額為:
cc

id20
91       	 <--TYPE
598       	 <--LEFT
618       	 <--TOP
242       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為30%應納稅額為:
dd

id21
91       	 <--TYPE
605       	 <--LEFT
714       	 <--TOP
242       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為40%應納稅額為:
ee

id22
2       	 <--TYPE
66       	 <--LEFT
576       	 <--TOP
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

id3,id4
0
YES
id3,id5
0
NO
id5,id9
0
YES
id5,id6
0
NO
id6,id10
0
YES
id6,id7
0
NO
id7,id11
0
YES
id7,id8
0
NO
id8,id12
0
YES
id9,id13
0

id10,id14
0

id11,id15
0

id12,id16
0

id4,id17
0

id13,id18
0

id14,id19
0

id15,id20
0

id16,id21
0

id17,id22
0

id18,id22
0

id19,id22
0

id20,id22
0

id21,id22
0

