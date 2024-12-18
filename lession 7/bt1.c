#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    int b=5;
    
    printf("tung phan tu trong mang la:\n");
    for(int i=0;i<b;i++){
        printf("phan tu trong mang a[%d] = %d\n", i, a[i]);
    }
    printf("do dai cua mang là %d", b);
    return 0;
}