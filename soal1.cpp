#include <iostream>
#include <vector>
using namespace std;

vector<int> rotasiKiri(vector<int> arr, int d) {
    int n = arr.size();
    d = d % n; 

    vector<int> hasil;

    for (int i = d; i < n; i++) {
        hasil.push_back(arr[i]);
    }

    for (int i = 0; i < d; i++) {
        hasil.push_back(arr[i]);
    }

    return hasil;
}

int main() {
    system("cls");

    int n, d;
    cout << "Masukkan n dan banyak rotasi: "; cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> hasil = rotasiKiri(arr, d);

    for (int i = 0; i < n; i++) {
        cout << hasil[i] << " ";
    }
    cout << endl;

    return 0;
}
