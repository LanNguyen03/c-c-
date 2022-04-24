#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct Nut{
	int x; 
	Nut*next;
};
typedef Nut*TroNut;

void NhapDanhSach(TroNut &First){
	int ch = 0;
	int x = 0;
    do{
    printf("\nNhap so: ");
    scanf("%d", &x);
    TroNut p = (TroNut)malloc(sizeof(Nut));
    p->x = x;
    p->next = First;
    First = p;
    printf("Nhan ESC de thoat, nhan nut bat ky de tiep tuc: ");
    ch = getch();
    } while(ch!=27);
}

void HienThi(TroNut First){
    TroNut p = First;
    printf("\n");   
    while(p!=NULL){   
    printf("%d\t", p->x);
    p = p->next;
    }
}

float Tong(TroNut First){
    TroNut p = First;
    printf("\n");   
    float sum=0;
    while(p!=NULL){
	sum=sum+p->x;   
    p = p->next;
    }
    return sum;
}

int tinhtrungbinh(TroNut First){
	TroNut p = First;   
    int tb=0;
    while(p!=NULL){
	tb+=p->x;   
    p = p->next;
    }
    tb/=2;
    return tb;
}

void TimKiem(TroNut First, int kiemtra){
	
}
int main(){
	TroNut First = NULL;
	NhapDanhSach(First);
//	HienThi(First);
//	printf("%c",&First);
//	printf("%f",Tong(First));
	printf("\n%d",tinhtrungbinh(First));
	return 0;
}

