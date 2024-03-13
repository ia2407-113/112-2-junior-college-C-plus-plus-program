22       	 <--SHAPES
25       	 <--LINES
id1
2       	 <--TYPE
1112       	 <--LEFT
17       	 <--TOP
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
1036       	 <--LEFT
68       	 <--TOP
218       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
"請輸入你的年收入"
income

id3
92       	 <--TYPE
1070       	 <--LEFT
130       	 <--TOP
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
92       	 <--TYPE
998       	 <--LEFT
226       	 <--TOP
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

id5
92       	 <--TYPE
996       	 <--LEFT
317       	 <--TOP
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

id6
92       	 <--TYPE
998       	 <--LEFT
404       	 <--TOP
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

id7
92       	 <--TYPE
1072       	 <--LEFT
494       	 <--TOP
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

id8
0       	 <--TYPE
880       	 <--LEFT
144       	 <--TOP
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
id9
0       	 <--TYPE
811       	 <--LEFT
236       	 <--TOP
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
829       	 <--LEFT
325       	 <--TOP
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
827       	 <--LEFT
413       	 <--TOP
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
905       	 <--LEFT
502       	 <--TOP
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
674       	 <--LEFT
238       	 <--TOP
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
674       	 <--LEFT
324       	 <--TOP
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
688       	 <--LEFT
412       	 <--TOP
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
761       	 <--LEFT
502       	 <--TOP
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
452       	 <--LEFT
140       	 <--TOP
234       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為5%應納稅額為
a

id18
91       	 <--TYPE
409       	 <--LEFT
234       	 <--TOP
238       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為12%應納稅額為
bb

id19
91       	 <--TYPE
387       	 <--LEFT
319       	 <--TOP
238       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為20%應納稅額為
cc

id20
91       	 <--TYPE
409       	 <--LEFT
406       	 <--TOP
238       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為30%應納稅額為
dd

id21
91       	 <--TYPE
453       	 <--LEFT
498       	 <--TOP
238       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
你的級距為40%應納稅額為
ee

id22
2       	 <--TYPE
181       	 <--LEFT
323       	 <--TOP
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

id3,id8
0
YES
id3,id4
0
NO
id4,id9
0
YES
id4,id5
0
NO
id5,id10
0
YES
id5,id6
0
NO
id6,id11
0
YES
id6,id7
0
NO
id7,id12
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

id8,id17
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

