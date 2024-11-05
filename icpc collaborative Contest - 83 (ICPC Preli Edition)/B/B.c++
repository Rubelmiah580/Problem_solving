#include <iostream>
using namespace std;

bool check_xor_zero(int n, int arr[]) {
    for (int x = 0; x < n - 3; x++) {   
        for (int y = x + 1; y < n - 2; y++) {   
            for (int z = y + 1; z < n - 1; z++) {   
                for (int w = z + 1; w < n; w++) {   
                    if ((arr[x] ^ arr[y] ^ arr[z] ^ arr[w]) == 0) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];
    }

    if (check_xor_zero(n, arr)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
