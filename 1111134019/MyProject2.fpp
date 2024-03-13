13       	 <--SHAPES
15       	 <--LINES
id1
2       	 <--TYPE
285       	 <--LEFT
61       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
2       	 <--TYPE
742       	 <--LEFT
501       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id3
91       	 <--TYPE
243       	 <--LEFT
117       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入三角形邊長
a

id4
91       	 <--TYPE
234       	 <--LEFT
197       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入三角形邊長
b

id5
91       	 <--TYPE
223       	 <--LEFT
280       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入三角形邊長
c

id6
0       	 <--TYPE
244       	 <--LEFT
369       	 <--TOP
114       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
a
b
兩邊和
id7
92       	 <--TYPE
249       	 <--LEFT
436       	 <--TOP
119       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
兩邊和
c

id8
0       	 <--TYPE
240       	 <--LEFT
544       	 <--TOP
114       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
b
c
兩邊和
id9
92       	 <--TYPE
253       	 <--LEFT
616       	 <--TOP
119       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
兩邊和
a

id10
0       	 <--TYPE
689       	 <--LEFT
870       	 <--TOP
114       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
a
c
兩邊和
id11
92       	 <--TYPE
705       	 <--LEFT
664       	 <--TOP
119       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
兩邊和
b

id12
91       	 <--TYPE
927       	 <--LEFT
556       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
可以形成三角形
d

id13
91       	 <--TYPE
460       	 <--LEFT
442       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
不能形成三角形
e

  
---- LINES ---- from,to ----
id1,id3
0

id3,id4
0

id4,id5
0

id5,id6
0

id6,id7
0

id7,id8
0
YES
id8,id9
0

id9,id10
0
YES
id10,id11
0

id7,id13
0
NO
id13,id2
0

id11,id12
0
YES
id12,id2
0

id9,id13
0
NO
id11,id13
0
NO
