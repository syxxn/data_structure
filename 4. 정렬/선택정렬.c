//값을 찾아서 앞에서부터 채워짐
#include <stdio.h>
#include <stdlib.h>

void swap (int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArr (int* arr, int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%2d ", arr[i]);
	}
}

void selectSort(int* arr, int size) {

	//위치를 넣어라
	int min;

	for (int i = 0; i < size; i++) {
		min = i;
		for (int j = i+1; j < size; j++) {
			if (arr[min] > arr[j])
				min = j;
		}
		swap(&arr[i], &arr[min]);
		printArr(arr, size);
	}

}

int main() {
	int size;
	int arr[] = { 69,10,30,2,16,8,31,22 };

	size = sizeof(arr) / sizeof(int);

	printf("---------selection sort------------");
	printArr(arr, size);
	selectSort(arr, size);


	return 0;
}