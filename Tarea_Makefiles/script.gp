set term pdf
set out "cuadratica.pdf"
set xlabel "N"
set ylabel "Diferencia x y x'"
plot 'datos.txt' u 1:7 w lp pt 4
replot 'datos.txt' u 1:8 w lp pt 4
 