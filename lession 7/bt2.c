#include <stdio.h>

int main(){
    int a[5];
    
    printf("nhap các phan tu cho mang\n");
    for(int i=0;i<5;i++){
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
       printf("Các phần tử trong mảng là:\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}