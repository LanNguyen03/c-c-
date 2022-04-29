#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct Data{
	char hoTen[20];
	float diemTin;
	float diemNgoaiNgu;
	float diemTB;
	char xepLoai[10];
};

struct SinhVien{
	Data data;
	SinhVien* Next;
};

typedef SinhVien* TroSinhVien;
void NhapDanhSach(TroSinhVien &First){
	char ch = 0;
do{
	fflush(stdin);
	printf("\nNhap ho ten: ");
	char hoTen[20];
	gets(hoTen);
	printf("Diem tin: ");
	float dT =0;
	scanf("%f", &dT);
	printf("Diem ngoai ngu: ");
	float dNN = 0;
	scanf("%f", &dNN);
	TroSinhVien p = (TroSinhVien)malloc(sizeof(SinhVien));
	// coppy chuoi
	strcpy(p->data.hoTen, hoTen);
	p->data.diemTin = dT;
	p->data.diemNgoaiNgu = dNN;
	p->data.diemTB = (dT + dNN)/2;
	p->Next = First;
	First = p;
	printf("Nhan ESC de thoat.");
	ch = getch();
	}while(ch!=27);
}

void HienThi(TroSinhVien First){
	TroSinhVien p = First;
	printf("\nHo ten          Diem Tin\tDiem ngoai ngu\tDiem TB\tXep loai");
	while(p!=NULL){
	printf("\n%s\t%.2f\t\t%.2f\t\t%.2f\t%s",(p->data).hoTen,(p->data).diemTin,(p->data).diemNgoaiNgu,(p->data).diemTB, (p->data).xepLoai);
	p = p->Next;
	}
}

//tim nguoi co ho ten la Ho Van Duong
void timkiemmaxtb(TroSinhVien First,char hoTen[]){
    TroSinhVien p = First;
    int dem=0;
    while (p != NULL) {
        if(strcmp(p->data.hoTen,hoTen)==0){
            dem++;
        }
        p=p->Next;
    }
    if(dem != 0){
        printf("Co ton tai ho ten %s",hoTen);
    }
}

// sap xep tang dan, giam dan DTBinh
int tangdan(TroSinhVien First){
	TroSinhVien p = First;
	int daytang=1;
	while(p!=NULL){
		if(p->data.diemTB > daytang){	
		daytang=p->data.diemTB;
	}
    p = p->Next;
	}
}
int giamdan(TroSinhVien First){
	TroSinhVien p = First;
	int daygiam=1;
	while(p!=NULL){
		if(p->data.diemTB < daygiam){	
		daygiam=p->data.diemTB;
	}
    p = p->Next;
	}
}

int main(){
	TroSinhVien First  = NULL;
	NhapDanhSach(First);
	HienThi(First);
//    fflush(stdin);
//    printf("\nNhap ho ten can tim kiem: ");
//    char hoTencantimkiem[20];
//    gets(hoTencantimkiem);
//    timkiemmaxtb(First,hoTencantimkiem);
	//tangdan(First);
	giamdan(First);
	return 0;
}