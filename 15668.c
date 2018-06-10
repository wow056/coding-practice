#include <stdio.h>
#include <string.h>

int chosen1[10], chosen2[10], chosen1_size, chosen2_size;
int count = 0, meaningful_calculation = 0, meaningless_calculation = 0;

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void print(const int n, const int arr[]) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void permutation_layer1(const int n, const int depth, int arr[]) {
	int i;

	if (depth + 1 == n) {
		print(n, arr);
		printf("      %d\n", ++count);
		return;
	}
	else {
		for (i = depth; i < n; i++) {
			swap(arr + depth, arr + i);
			permutation_layer1(n, depth + 1, arr);
			swap(arr + depth, arr + i);
		}
	}
}

void combination(const int n, const int r, const int source[], int destination[], int source_index, int destination_index) {
	int i;
	if (destination_index == r) {
		permutation_layer1(r, 0, destination);
		return;
	}
	else if (source_index == n) {
		return;
	}
	else {
		for (i = source_index; i < n; i++) {
			destination[destination_index] = source[i];
			combination(n, r, source, destination, i + 1, destination_index + 1);
		}
	}
}

int main(void) {
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	int b[4];
	combination(7, 4, a, b, 0, 0);
	printf("use: %d, unused: %d\n", meaningful_calculation, meaningless_calculation);
	return 0;
}