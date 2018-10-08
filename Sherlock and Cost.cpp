#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cost function below.
int cost(vector<int> B) {
    int a,b,max_a=0,max_b=0,max_a_temp,max_b_temp;
    for(int i=1;i<B.size();i++){
        a=abs(B[i]-1);//assuming 1st element as 1
        b=abs(1-B[i-1]);//assuming 2nd element as 1
        max_a_temp=max(max_a,max_b+b);
        max_b_temp=max(max_b,max_a+a);
        max_a=max_a_temp;
        max_b=max_b_temp;
    }
    return max(max_a,max_b);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string B_temp_temp;
        getline(cin, B_temp_temp);

        vector<string> B_temp = split_string(B_temp_temp);

        vector<int> B(n);

        for (int i = 0; i < n; i++) {
            int B_item = stoi(B_temp[i]);

            B[i] = B_item;
        }

        int result = cost(B);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
