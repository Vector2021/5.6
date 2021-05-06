#include<iostream>
#include<map>
#include<set>
using namespace std;

void Qsort(int* a, int start, int end)
{
	if (start > end)
		return;

	int i = start;
	int j = end;
	int key = a[i];

	while (i < j)
	{
		while (i < j && a[j] >= key)
		{
			j--;
		}
		a[i] = a[j];
		while (i < j && a[i] <= key)
		{
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	Qsort(a, start, i - 1);
	Qsort(a, i + 1, end);
}

void display(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ",";
	}
	cout << "\n";
}

int main()
{
	const int N = 10;
	int arr[N] = { 5,4,8,45,58,65,12,25,36,57 };
	Qsort(arr,0,N-1);
	display(arr, N);
	return 0;
}