#include <stdio.h>

int main() {
	int a;
	int b[a];
	printf("phap so luong phan tu cua mang: ");
	scanf("%d", &a);

	printf("phap cac phan tu cua mang:\n");
	for (int i = 0; i < a; i++) {
		printf("phan tu thu %d: ", i + 1);
		scanf("%d", &b[i]);
	}

	printf("mang da nhap la: ");
	for (int i = 0; i < a; i++) {
		printf("%d", b[i]);
	}
	printf("\n");

	return 0;
}