#include<stdio.h>
int main(){
	float a,b,c;
	printf("Nhap vao canh a: ",&a);
	scanf("%f",&a);
	printf("Nhap vao canh b: ",&b);
	scanf("%f",&b);
	printf("Nhap vao canh c: ",&c);
	scanf("%f",&c);
	if(a<b+c && b<a+c && c<a+b){
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
	}
	else{
		printf("tam giac khong hop le");
	}
	return 0;
}