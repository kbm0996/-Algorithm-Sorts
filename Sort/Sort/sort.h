#ifndef __SORT_H__
#define __SORT_H__

#include <cstdio>
#include <Windows.h>
#include <vector>
using namespace std;


#define __TESTCASE__
#ifndef __TESTCASE__
#define PRINT_TESTCASE(ARRAY,N1,N2) {}
#else
#define PRINT_TESTCASE(ARRAY,N1,N2) PrintCase(ARRAY,N1,N2)
#endif

void BubbleSort(vector<int>& pArray);
void InsertionSort(vector<int>& pArray);
void QuickSort(vector<int>& pArray, int iLeft, int iRight);

void PrintCase(vector<int>& pArray, int iCnt, int iCnt2);

inline void Swap(int *a, int *b);

#endif // !__SORT_H__
