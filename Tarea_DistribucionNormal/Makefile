random_pdf.pdf: seed1.txt seed2.txt seed5.txt script.gp
	gnuplot script.gp

seed5.txt: random_pdf.x
	./random_pdf.x 5 5000 3.5 0.4 2.7 4.6 50 > seed5.txt

seed2.txt: random_pdf.x
	./random_pdf.x 2 5000 3.5 0.4 2.7 4.6 50 > seed2.txt

seed1.txt: random_pdf.x
	./random_pdf.x 1 5000 3.5 0.4 2.7 4.6 50 > seed1.txt

random_pdf.x: random_pdf.cpp
	g++ random_pdf.cpp -o random_pdf.x
