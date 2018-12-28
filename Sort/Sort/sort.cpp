#include "sort.h"

void PrintCase(vector<int>& pArray, int iCnt, int iCnt2)
{
	for (int i = 0; i < pArray.size(); ++i)
	{
		if (i == iCnt || i == iCnt2)
		{
			printf("[%02d]", pArray[i]);
		}
		else
		{
			printf(" %02d ", pArray[i]);
		}
	}
	printf("\n");
}

void BubbleSort(vector<int>& pArray)
{
	int iTemp;

	for (int i = 0; i < pArray.size() - i * 2; i++)
	{
		for (int j = 0; j < pArray.size() - i - 1; j++)
		{
			if (pArray[j] > pArray[j + 1])
			{
				iTemp = pArray[j];
				pArray[j] = pArray[j + 1];
				pArray[j + 1] = iTemp;

				PRINT_TESTCASE(pArray, j, j + 1);
			}
			else
			{
				PRINT_TESTCASE(pArray, pArray.size(), pArray.size());
			}
		}
	}
}

inline void Swap(int *a, int *b)
{
	int iTemp = *a;
	*a = *b;
	*b = iTemp;
}

void InsertionSort(vector<int>& pArray)
{
	for (int iIndex = 0; iIndex < pArray.size() - 1; iIndex++)
	{
		if (pArray[iIndex] > pArray[iIndex + 1])
		{
			for (int iCnt = iIndex + 1; iCnt > 0; iCnt--)
			{
				if (pArray[iCnt] < pArray[iCnt - 1])
				{
					Swap(&pArray[iCnt], &pArray[iCnt - 1]);
					PRINT_TESTCASE(pArray, iCnt, iCnt - 1);
				}
				else
				{
					break;
				}
			}
		}
	}
}

void QuickSort(vector<int>& pArray, int iLeft, int iRight)
{
	int iPivotData;
	int iPivotPos;

	int iLeftOrigin = iLeft;
	int iRightOrigin = iRight;

	if (iLeft >= iRight)	 // ��, �� ��ġ �񱳷� �˻��� �������� Ȯ��
		return;

	iPivotData = pArray[iLeft];
	iPivotPos = iLeft;

	++iLeft; // ���� ������ ��ġ �������� Ž��

	while (iLeft <= iRight)	// ���ʰ� �������� ���� �� Right�� �������� �� ĭ�� �� �� ������ �ݺ�
	{
		while (iLeft < iRight && pArray[iLeft] <= iPivotData)
			++iLeft;

		while (iLeft <= iRight && pArray[iRight] > iPivotData)
			--iRight;

		if (iLeft < iRight)	// �������� ���� �����ʿ� �ִ� ���·� ����ٸ� pivot�� ����
		{
			Swap(&pArray[iLeft], &pArray[iRight]);
			PRINT_TESTCASE(pArray, iLeft, iRight);
		}
		else // �������� ������ �Ѿ�� �ߴ�
			break;
	}

	if (iPivotPos != iRight)
		Swap(&pArray[iPivotPos], &pArray[iRight]);

	QuickSort(pArray, iLeftOrigin, iRight - 1);
	QuickSort(pArray, iRight + 1, iRightOrigin);
}
