#include <iostream>
#include <string>

using namespace std;

string LongestCommonSubsequence(string x, string y);

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
    int i, j = 0;

    i = x.length();
    j = y.length();
}
