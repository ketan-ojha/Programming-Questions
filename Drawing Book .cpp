#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n,p,s1,s2;
    cin>>n;
    cin>>p;
    s1=p/2;
    
    s2=n/2-p/2;
    
    if(s1<s2)
        cout<<s1;
    else
        cout<<s2;
}
