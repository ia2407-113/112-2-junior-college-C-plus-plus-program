23       	 <--SHAPES
26       	 <--LINES
id1
2       	 <--TYPE
369       	 <--LEFT
54       	 <--TOP
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
266       	 <--LEFT
156       	 <--TOP
262       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入綜合所得淨額
綜合所得淨額

id3
92       	 <--TYPE
90       	 <--LEFT
227       	 <--TOP
202       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
綜合所得淨額
560000

id4
92       	 <--TYPE
312       	 <--LEFT
227       	 <--TOP
397       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
綜合所得淨額|IF_GREATER_EQUAL|560001
綜合所得淨額|IF_LESS_EQUAL|1260000

id5
92       	 <--TYPE
738       	 <--LEFT
226       	 <--TOP
404       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
綜合所得淨額|IF_GREATER_EQUAL|1260001
綜合所得淨額|IF_LESS_EQUAL|2520000

id6
92       	 <--TYPE
1159       	 <--LEFT
222       	 <--TOP
404       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
綜合所得淨額|IF_GREATER_EQUAL|2520001
綜合所得淨額|IF_LESS_EQUAL|4720000

id7
92       	 <--TYPE
1612       	 <--LEFT
230       	 <--TOP
209       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
綜合所得淨額
4720001

id8
0       	 <--TYPE
326       	 <--LEFT
102       	 <--TOP
139       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
綜合所得淨額
0

id10
0       	 <--TYPE
82       	 <--LEFT
341       	 <--TOP
184       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
綜合所得淨額
0.05
a
id9
91       	 <--TYPE
25       	 <--LEFT
605       	 <--TOP
200       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
級距為5%, 應納稅額為
a

id11
0       	 <--TYPE
404       	 <--LEFT
320       	 <--TOP
177       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
綜合所得淨額
0.12
a
id12
0       	 <--TYPE
448       	 <--LEFT
387       	 <--TOP
97       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
a
39200
b
id13
91       	 <--TYPE
295       	 <--LEFT
477       	 <--TOP
203       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
級距為12%,應納稅額為
b

id14
0       	 <--TYPE
852       	 <--LEFT
321       	 <--TOP
170       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
綜合所得淨額
0.2
a
id15
0       	 <--TYPE
888       	 <--LEFT
390       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
a
140000
b
id16
91       	 <--TYPE
880       	 <--LEFT
466       	 <--TOP
203       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
級距為20%,應納稅額為
b

id17
0       	 <--TYPE
1285       	 <--LEFT
323       	 <--TOP
170       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
綜合所得淨額
0.3
a
id18
0       	 <--TYPE
1322       	 <--LEFT
390       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
a
392000
b
id19
0       	 <--TYPE
1633       	 <--LEFT
323       	 <--TOP
170       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
綜合所得淨額
0.4
a
id20
0       	 <--TYPE
1667       	 <--LEFT
384       	 <--TOP
104       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
a
864000
b
id21
91       	 <--TYPE
1243       	 <--LEFT
521       	 <--TOP
187       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
級距30%,應納稅額為
b

id22
91       	 <--TYPE
1623       	 <--LEFT
451       	 <--TOP
187       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
級距40%,應納稅額為
b

id23
2       	 <--TYPE
822       	 <--LEFT
916       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
---- LINES ---- from,to ----
id1,id8
0

id8,id2
0

id2,id3
0

id3,id10
0
YES
id10,id9
0

id3,id4
0
NO
id4,id11
0
YES
id11,id12
0

id12,id13
0

id4,id5
0
NO
id5,id14
0
YES
id14,id15
0

id15,id16
0

id5,id6
0
NO
id6,id17
0
YES
id17,id18
0

id18,id21
0

id6,id7
0
NO
id7,id19
0
YES
id19,id20
0

id20,id22
0

id9,id23
0

id13,id23
0

id16,id23
0

id21,id23
0

id22,id23
0

