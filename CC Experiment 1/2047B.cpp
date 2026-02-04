#include <bits/stdc++.h>
using namespace std;

void frequencyCalc(int &mxCnt, int &mnCnt, char &mxCh, char &mnCh, int len, string str) {
    sort(str.begin(), str.end());

    for (int idx = 0; idx < len; ) {
        int ptr = idx;
        int freq = 0;

        while (ptr < len && str[ptr] == str[idx]) {
            freq++;
            ptr++;
        }

        if (freq > mxCnt) {
            mxCnt = freq;
            mxCh = str[idx];
        }

        if (freq <= mnCnt) {
            mnCnt = freq;
            mnCh = str[idx];
        }

        idx = ptr;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int highest = 0, lowest = INT_MAX;
        int length;
        char highChar = '\0', lowChar = '\0';
        string input;

        cin >> length;
        cin >> input;

        length = input.size();

        frequencyCalc(highest, lowest, highChar, lowChar, length, input);

        if (highChar != lowChar) {
            for (int i = 0; i < length; i++) {
                if (input[i] == lowChar) {
                    input[i] = highChar;
                    break;
                }
            }
        }

        cout << input << endl;
    }

    return 0;
}

