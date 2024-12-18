#include<stdio.h>
int main(){
	int arrray[5]={1,5,4,3,5};
 
    for(int i=0;i<5;i++){
		if(arrray[i]%2==0 ){
		printf(" %d ", arrray[i]+3);
		}else{
			printf(" %d ",arrray[i]+2);
			
		}
		}
		return 0;
	
}
