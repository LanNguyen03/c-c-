#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    int tong=0;
    cin>>s;
    while(s!=0){
    	tong+=s%10;
        s/=10;
    }
    cout<<tong;
    return 0;
}