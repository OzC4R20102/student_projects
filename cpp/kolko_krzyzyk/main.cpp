#include <iostream>
using namespace std;

	char tablica[3][3] = {
	{'W','W','W'},
	{'W','W','W'},
	{'W','W','W'}
	};

int main(){

	//wyswietlanie tablicy do gry
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<tablica[i][j];
			}
			cout<<endl;
		}

	//wybieranie pola przez uzytkownika
	int wybor;
	cout<<"Wybierz pole(1-9): ";
	cin>>wybor;
	//zmiana numeru pola na wspolrzedne
	int wiersz = (wybor - 1)/ 3;
	int kolumna = (wybor - 1)% 3;

	//wstawienie X w wybrane miejsce
	tablica[wiersz][kolumna]='X';

	//ponowne wyswietlanie tablicy
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<tablica[i][j];
			}
			cout<<endl;
		}
	//sprawdzanie czy pole jest wolne
	if(tablica[wiersz][kolumna]!= 'W'){
	cout<<"To pole jest zajete";}

	return  0;
}
