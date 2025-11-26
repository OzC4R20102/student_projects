#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));

//	int liczba1 = rand() % 10 + 1;//funkcja rand losuje liczbe od 1 do 10
//	cout<<"randomowa liczba z przedzialu od 1 do 10: "<<liczba1<<endl;
//	int liczba2 = rand() % 100 + 1;//losujemy liczbe od 1 do 100
//	cout<<"randomowa liczba od 1 do 100: "<<liczba2<<endl;

	int a;
	int b;
	int c;
	cout<<"podaj 2 liczby do przedzialu"<<endl;
	cin>>a,b;
	int liczbalosowa = rand() % a + b;
	cout"zgadnij liczbe"<<endl;
	cin>>c;
	if(c == liczbalosowa){
	cout<<"zgadles!";}else{
	cout<<"nie zgadles"; }
	return 0;
}
