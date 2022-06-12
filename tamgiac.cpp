#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao canh a: ",&a);
	scanf("%d",&a);
	printf("Nhap vao canh b: ",&b);
	scanf("%d",&b);
	printf("Nhap vao canh c: ",&c);
	scanf("%d",&c);
	if(a==b && a==c && b==c){
		printf("day la tam giac deu");
	}
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		printf("day la tam giac vuong");
	}
	return 0;
}