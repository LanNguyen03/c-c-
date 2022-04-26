#include <iostream>
 
using namespace std;
void showArray(int a[]){
    for(int i=0;i<sizeof(a[5]);i++){
        cout<<"vi tri thu i :"<<i<<"     Gia tri: "<<a[i]<<endl;
    }
}
void checkEvenNumber(int a[],int n){
    for(int i=0;i<=n-1;i++){
        if(a[i] % 2 == 0 ){
            cout<<"vi tri thu i :"<<i<<"     Gia tri chan: "<<a[i]<<endl;
        }
    }
}
int sum(int a[]){
    float sum=0;
     for(int i=0;i<=sizeof(a[5]);i++){
       sum+=a[i];// sum = sum+a[i];
    }
    return sum;
}
int sumEvenNumber(int a[],int n){
    float sum=0;
     for(int i=0;i<=n-1;i++){
         if(a[i] % 2==0){
         sum+=a[i];// sum = sum+a[i];
         }
    }
    return sum;
}
int sumEvenNumberAndNot5(int a[]){
    float sum=0;
     for(int i=0;i<=sizeof(a[5]);i++){
         if(a[i] % 2==0 && a[i] % 5 != 0){
            sum+=a[i];// sum = sum+a[i];
         }
    }
    return sum;
}
void inputArray(int a[],int n){
    for (int i = 0; i <= n-1; i++) {
        cout<<"Nhap mang o vi tri thu "<<i<<": ";
        cin >> a[i];
    }
}
 
int main()
{
    // int a[5]={1,2,3,4,5};
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<n;
    int a[n];
    inputArray(a,n);
    // showArray(a);
    checkEvenNumber(a,n);
    // cout<<"Tong cac phan tu trong mang: "<<sum(a);
    return 0;
}
