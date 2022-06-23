#include<iostream>
using namespace std;

class sophuc{
	private:
		int thuc,ao;
	public:
		void nhap(){
			cout<<"nhap lan luot thuc va ao: ";
			cin>>thuc>>ao;
		}
		void xuat(){
			cout<<thuc<<"+"<<ao<<"i"<<endl;
		}
		void cong(sophuc a){
			thuc += a.thuc;
			ao += a.ao;
		}
		void tru(sophuc a){
			thuc -=a.thuc;
			ao -= a.ao;
		}
		void nhan(sophuc a){
			sophuc z;
			z.thuc = thuc*a.thuc - ao*a.ao;
			z.ao = thuc*a.ao + ao*a.thuc;
		}
		void chia(sophuc a){
			sophuc z;
			z.thuc =  (thuc*a.thuc + ao*a.ao) / (thuc*a.thuc + ao*a.ao);
			z.ao = (ao*a.thuc - thuc*a.ao) / (thuc*a.thuc + ao*a.ao);
		}
};

int main(){
	sophuc a,b,z;
	a.nhap();
	b.nhap();
	
	cout<<"cong= ";
	z=a;
	z.cong(b);
	z.xuat();
	
	cout<<"tru= ";
	z=a;
	z.tru(b);
	z.xuat();
	
	cout<<"nhan= ";
	z=a;
	z.nhan(b);
	z.xuat();
	
	cout<<"chia= ";
	z=a;
	z.chia(b);
	z.xuat();
	return 0;
}