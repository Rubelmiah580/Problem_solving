#include <iostream>
#include <cmath>
using namespace std;

int calculate_min_planks(int n) {
  
    const int plank_length = 60;
    
  
    int total18 = n, total21 = n, total25 = n;
    int total_planks = 0;


    while (total18 > 0 || total21 > 0 || total25 > 0) {
        int used18 = 0, used21 = 0, used25 = 0;
        int remain_length = plank_length;


        while (remain_length >= 25 && total25 > 0) {
            remain_length -= 25;
            used25++;
            total25--;
        }

   
        while (remain_length >= 21 && total21 > 0) {
            remain_length -= 21;
            used21++;
            total21--;
        }

  
        while (remain_length >= 18 && total18 > 0) {
            remain_length -= 18;
            used18++;
            total18--;
        }

        total_planks++;
    }

    return total_planks;
}

int main() {
    int n;
    cin >> n;

    int result = calculate_min_planks(n);
    cout << result << endl;

    return 0;
}
