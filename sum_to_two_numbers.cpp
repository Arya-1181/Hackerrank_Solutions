
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string l,u;
    cin>>l>>u;
    long a=stoi(l);
    long b=stoi(u);
    for (long i=a; i<=b; i++){
        long long n=i*i;
        string s=to_string(i);
        long d=s.length();
        string ss=to_string(n);
        string left=ss.substr(0,d);
        string right=ss.substr(d,ss.length()-d);
        long x=stoi(left);
        long y=stoi(right);
        
        if (x+y==i)
        cout<<i<<endl;
        else
        continue;
    }
}
