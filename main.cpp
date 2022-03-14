#include <iostream>
#include <string>

using namespace std;

string LongestCommonSubsequence(string x, string y);

string print(string x, string y);

int main() {
    string x = "";
    string y = "";

    cout << "Longest Common Subsequence" << endl;
    cout << "--------------------------" << endl;
    cout << "Enter 2 strings below:" << endl;
    cout << "X: ";
    cin >> x;
    cout << endl;
    cout << "Y: ";
    cin >> y;

    LongestCommonSubsequence(x, y);


}

string LongestCommonSubsequence(string x, string y) {
    int m, n = 0;

    m = x.length();
    n = y.length();

    if (x[m] == y[n]) {
        return LongestCommonSubsequence(x[m-1], y[n-1]) + 1;
    } else if (x[m] != y[n]) {
        return max(LongestCommonSubsequence(x[m], y[n-1]), LongestCommonSubsequence(x[m-1], y[n]));
    }
}

string print(string x, string y) {
    int m, n = 0;
    
}