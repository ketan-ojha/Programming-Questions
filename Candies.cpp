#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(long n, vector<int> arr) {
    long c[n],s=0;
    for(long i=0;i<n;i++){
        c[i]=1;
    }
    for(long i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            c[i]=c[i-1]+1;
    }
    for(long i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]&&c[i]<=c[i+1]){
            c[i]=c[i+1]+1;
        }
    }
    for(long i=0;i<n;i++){
        s+=c[i];
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
