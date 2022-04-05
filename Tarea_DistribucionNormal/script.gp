set term pdf
set out "random_pdf.pdf"
set xlabel "x"
set ylabel "f(x)"
plot 'seed1.txt' u 1:2 w lp pt 4
replot 'seed2.txt' u 1:2 w lp pt 2
replot 'seed5.txt' u 1:2 w lp pt 3