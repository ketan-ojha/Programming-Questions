#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,a,b,x,s;
    cin>>n>>q;
    vector<vector<int>> e;
    for(int i=0;i<n;i++){
        cin>>s;
        vector<int> d;
        for(int j=0;j<s;j++){
            cin>>x;
            d.push_back(x);
        }
        e.push_back(d);
        
    }
    for(int k=0;k<q;k++){
        cin>>a>>b;
        cout<<e[a][b]<<endl;
        
    }
        
    return 0;
}
