#include <stdio.h>

int main() {
	int n,i;

	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);

	int arr[n];
	for (i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d : ", i + 1);
		scanf("%d", &arr[i]);

	while (arr[i] % 2 == 0) {
	printf("sai! Nhap lai phan tu %d: ", i + 1);
	scanf("%d", &arr[i]);
		}
	}
	printf("Cac phan tu cua mang la: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}