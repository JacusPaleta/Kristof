#include <iostream>
using namespace std;

int main(){
	/* inkrementacja
	i = i + 1
	i++
	dekrementacja
	i--
	*/
	// for(wartoscPoczatkowa; warunekKonczacy; krok)
	for(int i=0; i < 5; i++){ // i - zmienna lokalna, istnieje ona tylko w petli
		cout << "Wartosc i: " << i << endl;
	}

	int wysokosc, szerokosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	cout << "Podaj szerokosc: ";
	cin >> szerokosc;

	for(int i=0; i<wysokosc; i++){
		for(int j=0; j<szerokosc; j++){
			cout << " " << i << j;
			
		}
		cout << endl;
	}
	
	
cout << endl;
system("pause");
}