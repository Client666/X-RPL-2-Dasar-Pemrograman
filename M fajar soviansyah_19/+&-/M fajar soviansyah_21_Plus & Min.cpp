#include <iostream>

using namespace std;

int main()
{
    int arr, j, total, hasil;
    cout << "Input jumlah array: ";
    cin >> arr;
    cout << endl;

    int input[arr];

    cout << "input " << arr << "indeks: ";
    cout << endl;

    total = 0;
    hasil = 0;
    for (j = 0; j < arr; j++){
        cout << "indeks ke-" << j << ": ";
        cin >> input[j];
        total = total + input[j];
        if (j > 0){
            hasil = hasil -  input[j];
        }else {
            hasil = input[j];
        }
    }

    cout << endl;

    cout << " Total jumlah dari " << arr << " indeks tersebut adalah: " << total << endl;
    cout << " Hasil pengurangan indeks pertama dari " << arr << " indeks tersebut adalah: " << hasil << endl;

    return 0;
}
