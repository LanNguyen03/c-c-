#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void xuat(int a[],int n){
	cout<<"cac phan tu co trong mang:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}

int tbc(int a[], int n){
    float tb=0;
    int dem=0;
    for (int i=0; i<n; i++){
        if (a[i]%2==0){
            tb+=a[i];
            dem++;
        }
    }
    tb/=dem;
    return tb;
}

int sum(int a[], int n){
	float sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			sum+=a[i];
		}
	}
	return sum;
}

void candem(int a[], int n){
	int candem=0;
	int x;
	cout<<"nhap phan tu can dem: ";
	cin>>x;
	for(int i=0;i<n;i++){
        if(a[i]==x)
            candem ++;
    }
    cout<<candem;
}

void xoaphantu(int a[], int n, int p){
	for(int i=p;i<n;i++){
        a[i] = a[i+1];
    }
}

	
int main(){
	int n,p; 
	int a[n];
	cin>>n;
	nhap(a,n);
	//xuat(a,n);
	//cout<<tbc(a,n);
	//cout<<sum(a,n);
	//candem(a,n);
	cout<<"nhap vi tri can xoa: ";
	cin>>p;
	xoaphantu(a,n,p);
	xuat(a,n-1);
	return 0;
}