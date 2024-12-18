#include <stdio.h>

int main() {
	int arr[5], max, min;

	printf("nhap 5 phan tu gan cho mang: \n");
	for(int i=0; i<5; i++) {
		printf(" phan tu thu %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("phan tu lon nhat: %d", max);
	printf("phan tu nho nhat: %d\n", min);
	return 0;
}