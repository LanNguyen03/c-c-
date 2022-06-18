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
	else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		printf("day la tam giac vuong");
	}
	else if(a==b || a==c || b==c){
		printf("day la tam giac can");
	}	
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b){
    	printf("day la tam giac tu");
	}else{
		printf("day la tam giac nhon");
	}
	return 0;
}