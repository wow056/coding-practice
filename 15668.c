#include <stdio.h>
#include <stdlib.h>

int ChosenNum[10];

int digit(int n)
{
    int i, temp;
    while(10)
}

int FindAnswer(const int arr[], int N)
{
    
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void permutation(int arr[], int depth, int n, int k)
{
    int i;
    if (depth == k)//재귀를 마침, 이 때 원하는 연산 실행
    {
        myfunc();
        return;
    }

    for (i = depth; i < n; i++)
    {
        swap(arr, depth, i);
        permutation(arr, depth + 1, n, k);
        swap(arr, depth, i);
    }
}

int main()
{
    int N;
    int ArrOfChosen[10];
}