#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

pair<int, int> herons_area(int a, int b, int c) {
    int s = a + b + c;
    int area_num = s * (s - 2 * a) * (s - 2 * b) * (s - 2 * c);
    int area_den = 16;
    return {area_num, area_den};
}

void calculate_area(int a, int b, int c) {
    pair<int, int> area = herons_area(a, b, c);
    int numerator = area.first;
    int denominator = area.second;

    int P = a + b + c;
    int numerator_sq = numerator * 4;
    int denominator_sq = denominator * P * P;

    int common_divisor = gcd(numerator_sq, denominator_sq);

    numerator_sq /= common_divisor;
    denominator_sq /= common_divisor;

    cout << numerator_sq << "/" << denominator_sq << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        calculate_area(a, b, c);
    }

    return 0;
}
