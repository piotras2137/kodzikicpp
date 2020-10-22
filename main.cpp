/*
 *to jest pliczek zawierajacy wszystkie rzeczy jakie beda na podstawach programowania
 *od siebie dodalem komentarze objasniajace dzialanie danych rzeczy w kodzie
 *wszystko zawarte jest w funkcjach poniewasz mr Szypul wprowadzil funkcje bardzo szybko 
 *
 *kodzik na ktorym to powstalo pisal jakis kurwa rzeznik i sie musialem duzo napisac zeby to bylo ogarniete i zrozumiale
 *
 * JAK TEGO UZYWAC?
 * 1. zjedz do maina "int main()"
 * 2. w mainie znajduja sie wywolania wszystkich funkcji pokolei 
 * 3. wybierz sobie ta ktora cie interesuje i wyszukaj ja uzywajac ctrl + f
 * 4. kazda linijka jest wyjasniona dodatkowo okomentowalem wszystko co moze byc niezrozumiale dla newbie i noobow
 *
 *
 * */
///dolaczanie bibliotek
#include <iostream>///podstawowa biblioteka zawierajaca instrukcje wejscia i wyjscia
#include <vector>///biblioteka do obslugi wektorow
#include <time.h>///biblioteka do obslugi rzeczy zwiazanych z czasem 


///ustawianie przestrzeni nazw na przestrzen standardową (nie wykorzystacie innych przestrzeni nazw podczas zajec wiec nie ma sensu sie nad tym rozplywac)
using namespace std;

struct wdp
{
	vector <int> liczby;
	vector <int> wystapienia;
};

void wypisz(vector <int> tab)///funkcja wypisujaca tablice przekazana w argumencie
{
	for (int i = 0; i < tab.size(); i++)///petla for z wartosciami od 0 do rozmiaru tablicy  
	{
		cout << tab[i] << " ";///wypisanie danego elementu tablicy oraz spacji
	}
	cout << endl;///wypisanie entera
}
int minimum(vector <int> tab)///funkcja wyszukujaca minimalna wartosc w tablicy przekazaniej w argumencie
{
	int min = tab[0];///utworzenie zmiennej na wartosc najmniejsza i przypisanie jej wartosci pierwszego elementu tablicy 
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy
	{	
		if (tab[i] < min)///sprawdzenie czy dany element tablicy jest mniejszy od min
		{
			min = tab[i];///jesli tak to min przyjmuje ta wartosc
		}
	}
	return min;///zwrocenie wartosci min
}
bool czynalezy(vector <int> tab, int spr)///funkcja sprawdzajaca czy dana liczba (spr) znajdusie sie w vectorze (tab)
{
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy 

	{		if (tab[i] == spr)///sprawdzenie czy  liczba spr rowna sie danemu elementowi vectora tab 
		{
			return true;///jesli tak to zwraca true (prawda)
		}
	}
	///jesli przejdzie cala pentla to zwraca falsz
	return false;///o tutaj 
}
bool czyzawiera(vector <int> tab, vector <int> tab2)///funkcja sprawdzajaca czy wartosci z jednego vectora  sa w drugim
{
	for (int i = 0; i < tab2.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy tab2
	{
		if (!czynalezy(tab, tab2[i]))///sprawdzenie czy dana liczba z tab2 nie znajduje sie w tab
		{
			///zwraca falsz
			return false;
		}
	}
	///w przypadku gdy cala pentla przeleciala bez zwracania niczego funkcja zwraca prawde
	return true;
}
int suma(vector <int> tab)///funkcja suma sumujaca dane z vectora
{
	int wynik = 0;////zmienna na wynik z przypisana wartoscia na 0 
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru vectora
		wynik += tab[i];///dodanie do zmiennej wynik wartości z indexu "i" vectroa

	return wynik;///zwrocenie wyniku
}
vector<int> unikalnosc(vector <int> tab)///funkcja unikalnosc zbierajaca unikalne wartosci z vectora
{
	vector <int> wynik;///wektor na unikalne wartosci 
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru vectora tab 
	{
		if (!czynalezy(wynik, tab[i]))////sprawdzenie czy dana wartosc nie znajduje sie w wektorze wynik 
		{
			wynik.push_back(tab[i]);///jezeli sie nie znajduje to dodanie jej do wektora wynik
		}
	}
	return wynik;///zwrocenie wektora wynik 
}
vector <int> wybierz(vector <int> tab, int dzielnik, int reszta = 0)
{
	vector <int> wynik;
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy 
		if (tab[i] % dzielnik == reszta)
		{
			wynik.push_back(tab[i]);
		}
	return wynik;
}

int index(vector <int> tab, int elem)
{
	int wynik;
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy 
		if (tab[i] == elem)
		{
	 		return i;
	     }
	return -1;

}
wdp czestosc(vector <int> tab)
{
	wdp wynik;
	for (int i = 0; i < tab.size(); i++)///penta for przyjmujaca wartosci od 0 do rozmiaru tablicy 
		if (index(wynik.liczby,tab[i] == -1))
		{
			wynik.liczby.push_back(tab[i]);
			wynik.wystapienia.push_back(1);
		}
		else
		{
			wynik.wystapienia[index(wynik.liczby, tab[i])]++;
		}
	return wynik;
}

vector <int> generuj(int n, int min, int max)
{
	vector <int> wynik;
	int liczby;
	for (int i = 0; i < n; i++)
	{
		liczby = rand() % (max - min + 1) + min;
		wynik.push_back(liczby);
	}
	return wynik;
}

vector <int> generuj(int n, int max = 50)
{
	return generuj(n, 0, max);
}

void wypisz(wdp zm)///fukcja wypisujaca 
{
	wypisz(zm.liczby);
	wypisz(zm.wystapienia);
}
int sumaD(vector <int> tab, int n)
{
	int wynik = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		wynik += abs(tab[i] - n);
	}
	return wynik;
}
int zamieszkajW(vector <int> tab)
{
	int wynik = tab[0];
	int najOdl = sumaD(tab, tab[0]);
	for (int i = 1; i < tab.size(); i++)
	{
		int tmp = sumaD(tab, tab[i]);
		if (tmp < najOdl)
		{
			wynik = tab[i];
			najOdl = tmp;
		}
	}
	return wynik;
}
int main()
{


	/////wywolania funcji i zmienne pomocnicze
	srand(time(NULL));////ustawienie ziarna generatora liczb pseudolosowych, bez tej linijki losowanie zawsze zwroci to samo 
	vector <int> p = { 1,2,3,4,5,6,7,8};
	vector <int> k = {2,6,3};
	wypisz(p);
	cout << endl;
	cout << minimum(p);
	cout << endl;
	cout << czynalezy(p, 10);
	cout << endl;
	cout << czyzawiera(p, k);
	cout << endl;
	cout << suma(k);
	cout << endl;
	wypisz(wybierz(p, 2));
	cout << endl;
	wypisz(generuj(5, 20, 30));
	cout << endl;
	wypisz(unikalnosc(p));
	cout << endl;
	cout << index(k, 6);
	cout << endl;
	wypisz(czestosc(p).liczby);
	cout << endl;
	wypisz(czestosc(p).wystapienia);
	cout << endl;
	wdp zm = czestosc(p);
	wypisz(zm);
	cout << endl;
	wypisz(generuj(5));
	cout << endl;
	cout << sumaD(k, 6);
	cout << endl;
	cout << zamieszkajW(k);
}
