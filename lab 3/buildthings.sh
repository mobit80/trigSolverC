#buildthings.sh, script for lab 3 construction

gcc -c myLib.c -o myLib.o
ar rcs myLib.a myLib.o
gcc -c lab3.c -o lab3.o 
gcc -o lab3 lab3.o -L. myLib.c


