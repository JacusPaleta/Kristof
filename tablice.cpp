#include<iostream>
using namespace std;

int main(){
	
	float a;
	float b; 
	
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); //wykorzystanie metody getline()
    cout<<"Twoje dane osobowe: "<<tablica<<endl;
	for(int i = 0; i < 100; i++){
    	if(tablica[i] == ' '){
    		a = i;
    		
		}
    	if(tablica[i] == '\0'){
    		b = i;
    		break;
		}
    	
	}
	cout << "miejsce spacji: " << a <<endl;
	cout << "miejsce koncowe: " << b <<endl;
    return 0;
}