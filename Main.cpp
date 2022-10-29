#include <iostream>
using namespace std;

const int MAX_VOLUME = 10;
void readArrays(const int a[], int numberUsed);
void ReverseArrays(const int a[], int numberUsed);
void fillIn(const int a[], int numberUsed);
void showArrays(const int a[], int size, int numberUsed);

int main()
{
	readArrays(const int a[], numberUsed);
	ReverseArrays(int a[], numberUsed);
	
	return 0;
}

void fillIn(const int a[],int size, int numberUsed)
{
	int total, i, next;
	std::cout << "Enter the next Array" << endl;
	cin >> next;
	while ((i < size) &&  (numberUsed < size)) {
		next = a[i];
		i++;
		cin >> next;
	}
}


void readArrays(const int a[], int numberUsed)

{
	int total=0;
	for (int i = 0; i <= numberUsed; i++)
	{

		total += a[i];
		i++;
	}

}

void ReverseArrays(int a[], int numberUsed)
{
	int i, j, temp;
	j = numberUsed - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}


