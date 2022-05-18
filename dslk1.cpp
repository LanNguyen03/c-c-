#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct CNTT{
	char hoten[30];
	char diachi[30];
	char sdt[11];
};

struct CanBo{
	CNTT data;
	CanBo* next;
};
typedef CanBo* TroCanBo;

void NhapDanhSach(TroCanBo &First){
	char hoten[30];
	do{
		fflush(stdin);
		printf("\nNhap ho ten: ");
		gets(hoten);
	if(strlen(hoten)!=0){
		printf("\nDia chi: ");
		char diachi[30];
		fflush(stdin);
		gets(diachi);
		printf("\nSo dien thoai: ");
		char sdt[11];
		fflush(stdin);
		gets(sdt);
		TroCanBo p = (TroCanBo)malloc(sizeof(CanBo));
		strcpy(p->data.hoten, hoten);
		strcpy(p->data.diachi, diachi);
		strcpy(p->data.sdt, sdt);
		p->next = First;
		First = p;
		}
	}while(strlen(hoten)!=0);
}

void inthongtincanbo(TroCanBo First){
	TroCanBo p = First;
	for(p=First; p!=NULL; p=p->next)
	printf("\n%s, %s, %s",p->data.hoten, p->data.diachi, p->data.sdt);
}

char *tachho(char s[]){
       int i=1;
       while (s[i]!=' ') i++;
       s[i]=NULL;
       return &s[0];
}

void inhoNguyen(TroCanBo First){
	TroCanBo p = First;
	for(p=First; p!=NULL; p=p->next)
	if(strcmp(tachho(p->data.hoten),"nguyen")==0){
		printf("\ndanh sach can bo co ho nguyen: %s, %s, %s",p->data.hoten, p->data.diachi, p->data.sdt);
	}
}

void insdt(TroCanBo First){
	TroCanBo p = First;
	int dem=0;
	printf("nhap sdt: ");
	char SO[11];
	fflush(stdin);
	gets(SO);
	for(p=First; p!=NULL; p=p->next){
		if(strcmp(p->data.sdt,SO)==0){
			printf("\nin ra danh sach co sdt: %s, %s, %s",p->data.hoten, p->data.diachi, p->data.sdt);
			dem++;
		}
		if(dem != 0){
		}
	}
}

int main(){
	TroCanBo First = NULL;
	NhapDanhSach(First);
	//inthongtincanbo(First);
	char ho[30],hoten[50],ten[30];
    gets(hoten);
    strcpy(ho,tachho(hoten));
	inhoNguyen(First);
	//insdt(First);
	return 0;
}