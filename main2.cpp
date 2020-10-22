#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

void wypisz(vector<int> tab) {
for (int i = 0; i < tab.size(); i++) {
cout << tab[i];
}
cout << endl;
}

int min(vector<int> tab) {
int wynik = tab[0];
for (int i = 1; i < tab.size(); i++) {
if (wynik < tab[i]) {
wynik = tab[i];
}
}
return wynik;
}

int suma(vector<int> tab) {
int wynik = 0;
for (int i = 0; i < tab.size(); i++) {
wynik += tab[i];
}
return wynik;
}

bool CzyNalezy(vector<int> tab,int el) {
for (int i = 0; i < tab.size(); i++) {
if (el == tab[i]) {
return true;
}
}
return false;
}

bool CzyZawiera(vector<int> tab1, vector<int> tab2) {
for (int i = 0; i < tab2.size(); i++) {
if (!CzyNalezy(tab1, tab2[i])) {
return false;
}
}
return true;
}

vector<int> unikat(vector<int> tab) {
vector<int> wynik;
for (int i = 0; i < tab.size(); i++) {
if (!CzyNalezy(wynik, tab[i])) {
wynik.push_back(tab[i]);
}
}
return wynik;
}

int index(vector<int> tab, int el) {
for (int i = 0; i < tab.size(); i++) {
if (el == tab[i]) {
return i;
}
}
return -1;
}

vector<int> wybierz(vector<int> tab, int dziel, int reszta) {
vector<int> wynik;
for (int i = 0; i < tab.size(); i++) {
if (tab[i] % dziel == reszta) {
wynik.push_back(tab[i]);
}
}
return wynik;
}

struct Wdp {
vector<int> liczby;
vector<int> wystapienia;
};

Wdp czestosc(vector<int> tab) {
Wdp wynik;
for (int i = 0; i < tab.size(); i++) {
int ind = index(wynik.liczby, tab[i]);
if (ind == -1) {
wynik.liczby.push_back(tab[i]);
wynik.wystapienia.push_back(1);
}
else {
wynik.wystapienia[ind]++;
}
}
return wynik;
}

void wypisz(Wdp zm) {
wypisz(zm.liczby);
wypisz(zm.wystapienia);
}

int inwersja(vector<int> tab) {
int wynik = 0;
for (int i = 0; i < tab.size()-1 ; i++) {
for (int j = i+1; j < tab.size(); j++) {
if (tab[i] > tab[j]) {
wynik++;
}
}
}
return wynik;
}

void gwiazdki(int n) {

for (int i = 0; i < n; i++) {
for (int j = 0; j <= i; j++) {

cout << "*";
}
cout << endl;
}
}

int main()
{
vector<int> liczby = { 8,3,1,5,4 };
vector<int> liczby2 = { 5,8,4 };
wypisz(liczby);
cout << min(liczby) << " ";
cout << suma(liczby) << " ";
cout << CzyNalezy(liczby, 5) << " ";
cout << CzyZawiera(liczby, liczby2) << " ";
cout << index(liczby, 8) << endl;
wypisz(unikat(liczby));
wypisz(wybierz(liczby , 2, 0));
wypisz(czestosc(liczby));
inwersja(liczby);
gwiazdki(4);
}
