#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//#define _CRT_SECURE_NO_WARNINGS

int BinarySearch(int *a, int n, int s);
void MergeSort(int *a, int first, int last, int *tmp);
void Qsort(int *a, int l, int r);
int LinearSelect(int *a, int l, int r, int s);
int MatrixMultiply(int *a, int *b, int n);
void MatrixTraceBack(int l, int r);
int LCS(char *a, char *b, int la, int lb);
void LCSTraceBack(char *a, char *b, int la, int lb);
int LSS(int *a, int n, int *start, int *end);
int Knapsack(int *weight, int *value, int n, int V);

void HuffmanCode(int *fre, int n, int *rt);
void HuffmanTraceBack(int k);

void Dijkstra(int (*mp)[100], int n, int *dis, int s);



void Kruskal(int n, int m);

int NQueen(int n);

