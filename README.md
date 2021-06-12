# Sierpinski-Triangle

Trójkąt Sierpińskiego to jednowymiarowy automat komórkowy działający na tablicy 32x65 (t,x). W każdym rzędzie jest jedna iteracja po czasie. Zachowanie układu określają reguły:

0 < 0 > 0 —> 0

0 < 0 > 1 —> 1

0 < 1 > 0 —> 0

0 < 1 > 1 —> 0

1 < 0 > 0 —> 1

1 < 0 > 1 —> 0

1 < 1 > 0 —> 0

1 < 1 > 1 —> 0

0 < 0 > 1 —> 1: oznacza, że jeśli układ jest w stanie < 0 > i po lewej stronie jest 0 a po prawej jest 1 to przejdź do stanu 1. Pozostałe reguły analogicznie.

Wartość początkowa: t=0 —> x = 0...010...0 - środkowa pozycja jest równa 1; pozostałe 0.

<h1>Rezultat</h1>

<img src="https://i.ibb.co/GMNt4WB/trojkat.jpg">