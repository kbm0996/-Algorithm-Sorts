#include <vector>
#include <algorithm>
#include "sort.h"
#include "timer.h"
using namespace std;

void main()
{
	timeBeginPeriod(1);

	__int64 iBegin, iEnd;		// time check
	vector<int> Array;

	printf("<<<BUBBLE SORT>>>\n");
	Array = { 94, 3, 9, 10, 22, 1, 6, 91, 4 };
	PrintCase(Array, Array.size(), Array.size());
	iBegin = GetQPTick();
	BubbleSort(Array);
	iEnd = GetQPTick();
	PrintCase(Array, Array.size(), Array.size());
	printf("(Elapsed Time : %dms)\n\n", iEnd - iBegin);

	printf("<<<INSERTION SORT>>>\n");
	Array = { 94, 3, 9, 10, 22, 1, 6, 91, 4 };
	PrintCase(Array, Array.size(), Array.size());
	iBegin = GetQPTick();
	InsertionSort(Array);
	iEnd = GetQPTick();
	PrintCase(Array, Array.size(), Array.size());
	printf("(Elapsed Time : %dms)\n\n", iEnd - iBegin);

	printf("<<<QUICK SORT>>>\n");
	Array = { 94, 3, 9, 10, 22, 1, 6, 91, 4 };
	PrintCase(Array, Array.size(), Array.size());
	iBegin = GetQPTick();
	QuickSort(Array, 0, Array.size());
	iEnd = GetQPTick();
	PrintCase(Array, Array.size(), Array.size());
	printf("(Elapsed Time : %dms)\n\n", iEnd - iBegin);

	//printf("<<<STL QUICK? SORT>>>\n");
	//Array = { 94, 3, 9, 10, 22, 1, 6, 91, 4 };
	//PrintCase(Array, Array.size(), Array.size());
	//iBegin = GetQPTick();
	//sort(Array.begin(), Array.end());
	//iEnd = GetQPTick();
	//PrintCase(Array, Array.size(), Array.size());
	//printf("(Elapsed Time : %dms)\n\n", iEnd - iBegin);

	timeEndPeriod(1);
}