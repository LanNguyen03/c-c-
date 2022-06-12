#include<stdio.h>
#include<conio.h>
 
int main(){
	int a,b,so;
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
    printf("\n------------------------------");
    printf("\n1. Cong");
    printf("\n2. Tru");
    printf("\n3. Nhan");
    printf("\n4. Chia");
    printf("\n5. Ket thuc");
    printf("\n------------------------------");
	printf("\nChon phep tinh: ");
	scanf("%d",&so);
    switch (so){
    case 1:printf("\nket qua phep cong la: %d",a+b);getch();break;
    case 2:printf("\nket qua phep tru la: %d",a-b);getch();break;
    case 3:printf("\nket qua phep nhan la: %d",a*b);getch();break;
    case 4:printf("\nket qua phep chia la: %d",a/b);getch();break;
    case 5:break;
	}
}
