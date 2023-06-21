#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

void print(int** mass, int m, int n);
void cryzhik(int*** mass, int m, int n, int i, int j, int a);
void printRaskraska(int** mass, int m, int n);
void raskraska(int*** mass, int m, int n);
void inputRand(int*** mass, int n, int m);
int** createMass(int n, int m);
int check(int x, int y);