
#*****************************************************
#Fecha: 16 de Agosto de 2022
#Autor: Juan Sebastian Rojas Acevedo
#Materia: Parallel and Distributed Computing
#Tema: Primer taller en C
#Objetivo: Compilacion por separado
#*********/

GCC = gcc
FLAGS = -ansi -std=c99 -pedantic -Wall
MATHFLAGS = -lm

PROGRS = taller
 
all: $(PROGRS) 

taller:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c taller_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o taller_lib.o $(MATHFLAGS)

clean: 
	$(RM) *.o
	