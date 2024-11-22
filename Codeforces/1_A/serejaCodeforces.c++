// Problem Link : https://codeforces.com/problemset/problem/381/A
#include <iostream>
using namespace std;

int main() {
    int n, sereja = 0, dima = 0;
    cin >> n;

    int cards[n];
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int left = 0, right = n - 1; 
    bool serejaTurn = true; 

    while (left <= right) {
        int chosenCard;
        if (cards[left] > cards[right]) {
            chosenCard = cards[left];
            left++;
        } else {
            chosenCard = cards[right];
            right--;
        }

        if (serejaTurn) {
            sereja += chosenCard;
        } else {
            dima += chosenCard;
        }
        serejaTurn = !serejaTurn; 
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
