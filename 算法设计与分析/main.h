#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int BinarySearch(int *a, int n, int s);
void MergeSort(int *a, int first, int last, int *tmp);
void Qsort(int *a, int l, int r);