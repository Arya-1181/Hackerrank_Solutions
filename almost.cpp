#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    if (is_sorted(v.begin(),v.end()))
    cout<<"yes";
    else {
        vector <int> copy;
        copy=v;
        int flag=0;
        int s1,s2;
        for (int i=0; i<n-1; i++){
            if (v[i]>v[i+1]){
                for (int j=i+1; j<n-1; j++){
                    if (v[j]>v[j+1]){
                        int temp=v[i];
                        v[i]=v[j+1];
                        v[j+1]=temp;
                        s2=j+1;
                        flag=1;
                        break;
                    }
                }
            }
            if (flag==1){
            s1=i;
            break;
            }
        }
        if (is_sorted(v.begin(),v.end())){
        cout<<"yes"<<endl<<"swap "<<s1+1<<" "<<s2+1;
        }
        else {
            int flag=0;
            int r1,r2;
            vector <int> paste;
            for (int i=0; i<n-1; i++){
                if (copy[i]>copy[i+1]){
                    r1=i;
                    for (int j=i; j<n-1; j++){
                        if (copy[j]<copy[j+1]){
                            r2=j;
                            paste.push_back(copy[j]);
                            flag=1;
                        }
                        else
                        paste.push_back(copy[j]);
                    }
                }
                if (flag==1)
                break;
            }
/*            
            for (int i=0; i<paste.size(); i++){
                cout<<paste[i]<<" ";
            }
            cout<<endl<<r1<<"  "<<r2<<endl;
*/            
            for (int i=r1; i<=r2; i++){
                copy[i]=paste[r2-i];
            }
/*            
            for (int i=0; i<copy.size(); i++){
                cout<<copy[i]<<" ";
            }
            cout<<endl<<endl;
*/            
            if (is_sorted(copy.begin(),copy.end()))
            cout<<"yes"<<endl<<"reverse "<<r1+1<<" "<<r2+1;
            else
            cout<<"no";
        
    }
    }
}
    
    
    