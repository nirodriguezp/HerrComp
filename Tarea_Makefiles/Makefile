cuadratica.pdf: datos.txt script.gp
	gnuplot script.gp

datos.txt: cuadratica.x
	./cuadratica.x > datos.txt

cuadratica.x: cuadratica.cpp
	g++ cuadratica.cpp -o cuadratica.x
