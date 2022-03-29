#ifndef rodriguez
#define rodriguez

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef int** MATRIX;

MATRIX readInput(FILE*);
int whereToStart(MATRIX);
MATRIX modify(MATRIX, MATRIX);
int calculateVal(MATRIX, MATRIX);
int isValid(int);
void main();
void print(MATRIX);
MATRIX allocateMemory();
void freeMemory(MATRIX);

#endif