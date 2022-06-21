#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,n;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"nhap c: ";
	cin>>c;
	cout<<"nhap d: ";
	cin>>d;
	cout<<"\n------------------------------";
    cout<<"\n1. Cong";
    cout<<"\n2. Tru";
    cout<<"\n3. Nhan";
    cout<<"\n4. Chia";
    cout<<"\n5. Ket thuc";
    cout<<"\n------------------------------";
	cout<<"\nChon phep tinh: ";
	cin>>n;
	switch(n){
		case 1:cout<<a+c<<"a +"<<b+d<<"i";break;
		case 2:cout<<a-c<<"a -"<<b-d<<"i";break;
		case 3:cout<<a*c<<"a *"<<b*d<<"i";break;
		case 4:cout<<a/c<<"a /"<<b/d<<"i";break;
		case 5:break;
	}
	return 0;
}