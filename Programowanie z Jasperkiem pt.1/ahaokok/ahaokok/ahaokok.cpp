#include <iostream>
using namespace std;

int main() {
    {cout << "wprowadz 5 liczb: "
    }
     int liczba[10];
    for (int i = 0; i < 5; i++)
    {
        cin >> liczba[i];
    }

    cout << "Podales nastepujace liczby: ";
    for (int i = 0; i < 5; i++)
    {
        cout << liczba[i] << ", ";
    }
    
}