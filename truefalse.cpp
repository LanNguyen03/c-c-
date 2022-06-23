#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[n];
    int e=true; 
    int f=true; 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) e=false;
        if(a[i]>a[i-1]) f=false;
    }
    if(e || f){
    	cout<<"yes";
	}else{
		cout<<"no";
	} 
    return 0;
}