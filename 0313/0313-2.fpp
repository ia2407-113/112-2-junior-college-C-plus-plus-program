9       	 <--SHAPES
10       	 <--LINES
id1
2       	 <--TYPE
16       	 <--LEFT
458       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id5
91       	 <--TYPE
136       	 <--LEFT
455       	 <--TOP
116       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
��Ja���
a

id2
91       	 <--TYPE
274       	 <--LEFT
457       	 <--TOP
116       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
��Jb���
b

id3
91       	 <--TYPE
429       	 <--LEFT
457       	 <--TOP
116       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
��Jc���
c

id4
92       	 <--TYPE
598       	 <--LEFT
453       	 <--TOP
160       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_OR
a+b|IF_LESS_EQUAL|c
a+c|IF_LESS_EQUAL|b

id6
91       	 <--TYPE
1023       	 <--LEFT
283       	 <--TOP
142       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
�L�k�c���T����


id7
91       	 <--TYPE
1021       	 <--LEFT
453       	 <--TOP
146       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
�i�H\�c���T����


id8
92       	 <--TYPE
835       	 <--LEFT
451       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
b+c
a

id9
2       	 <--TYPE
1302       	 <--LEFT
455       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
---- LINES ---- from,to ----
id1,id5
0

id5,id2
0

id2,id3
0

id3,id4
0

id4,id6
0
YES
id4,id8
0
NO
id8,id6
0
YES
id8,id7
0
NO
id6,id9
0

id7,id9
0

