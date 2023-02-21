#include <bits/stdc++.h>

using namespace std;

void convert(int a,int b){
    string arr[53]={"o' clock","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty"};
    
    if (b==0)
    cout<<arr[a]<<" "<<arr[0];
    
    if (b==1)
    cout<<arr[b]<<" minute past "<<arr[a];
    
    if (b<=20&&b!=15){
        if (b==0)
        cout<<" ";
        else if (b==1)
        cout<<" ";
        else
        cout<<arr[b]<<" minutes past "<<arr[a];
    }
    
    
    if (b==15)
    cout<<"quarter past "<<arr[a];
    
    if (b==30)
    cout<<"half past "<<arr[a];
    
    if (b>30&&b<40){
        int x=60-b;
        int n=x%10;
        cout<<arr[20]<<" "<<arr[n]<<" minutes to "<<arr[a+1];
    }
    
    if (b>20&&b<30){
        int n=b%10;
        cout<<arr[20]<<" "<<arr[n]<<" minutes past "<<arr[a];
    }
    
    if (b==40){
        cout<<arr[20]<<" minutes to "<<arr[a+1];
    }
    
    if (b>40&&b!=45){
        int x=60-b;
//        int n=x%10;
        cout<<arr[x]<<" minutes to "<<arr[a+1];
    }
    
    if (b==45){
        cout<<"quarter to "<<arr[a+1];
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    convert(a,b);
}
