//뒤에부터 차기 시작함
//시간 복잡도는 n^2
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArr(int* arr, int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%2d ", arr[i]);
	}
}

void bubbleSort(int* arr, int size) {
	for (int i = size-1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
		printArr(arr, size);
		
	}
}


int main() {

	int size;
	int arr[] = { 69,10,30,2,16,8,31,22 };

	size = sizeof(arr) / sizeof(int);

	printf("---------bubble sort------------");
	printArr(arr, size);
	bubbleSort(arr, size);


	return 0;

}