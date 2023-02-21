#include <bits/stdc++.h>

using namespace std;

int dna(string p,string v){
    int lp=p.length();
    int lv=v.length();
    vector <int> result;
    for (int i=0; i<=lp-lv; i++){
        int count=i,sum=0;
        for (int j=0; j<lv; j++){
            if (v.at(j)==p.at(count))
            sum++;
            count++;
            
        }
        if (sum==lv-1||sum==lv)
        result.push_back(i);
        
    }
    if (result.empty()){
        cout<<"No Match!";
    }
    else{
        copy(result.begin(),result.end(),ostream_iterator<int>(cout," "));
    }
    cout<<endl;
    return 0;
}
int main(){
    int t;
    cin>>t;
    string p[t],v[t];
    for (int i=0; i<t; i++){
        cin>>p[i]>>v[i];
    }
    
    for (int i=0; i<t; i++){
        dna(p[i],v[i]);
    }
}