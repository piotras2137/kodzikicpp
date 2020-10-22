/*
to jest pliczek zawierajacy calkowite podstawy jezyka c++
wszystko jest wyjasnione w komentarzach w danej linijce
*/


///to jest komentarz jednoliniowy, dziala on od /// do konca danej linii

/*
to 
jest 
komentarz 
wielo 
liniowy
*/
///dziala on od */ do */

#include <iostream>///ta linijka odpowiada za dodanie biblioteki iostream do danego programu, biblioteka iostream odpowiada za instrukcje wyjcia i wejcia na konsole

using namespace std;///tutaj ustawiamy przestrzen nazw z ktorej bedziemy korzystac "std" jest standardowa przestrzenia nazw i z niej bedziecie glownie korzystac podczas zajec
/*
 _   ___      ____ _  __ _  __ _
| | | \ \ /\ / / _` |/ _` |/ _` |
| |_| |\ V  V / (_| | (_| | (_| |
 \__,_| \_/\_/ \__,_|\__, |\__,_|
                     |___/

przejdzcie teraz do funkcji main "int main()" uzywajac ctrl + f po czym kontynujujcie nauke stosujac sie do instrukcji tam zawartych
*/

///oto i nasz main , w nim znajduje sie wiekszosc kodu oraz wywolania dodatkowych funkcji kazda linijka jest okomentowana w celu wyjasnienia jej dzialania
int main()///funkcja main, to w niej zawiera sie glowna czesc programu , musi ona znajdować się w kazdym programie inaczej program sie nie zkompiluje 
{
/*
 _________________________
< najprosty program w c++ >
 -------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
    cout<<"siema byczki"<<endl;///ta linijka odpowiada za wypisanie napisu "siema byczki" oraz entera na ekrasn konsoli po czym wyswietla enter
/// cout - instrukcja wyswietlenia na ekran 
/// <<  -przekazanie porcji danch do wyswietlenia
/// "siema byczki" - napis do wyswietlenia
/// endl - nowa linijka/ enter rownowazne jest to z "\n"
/*
cout<<"siema byczki"<<"\n";
cout<<"siema byczki\n";
te 2 linijki maja takie same dzialanie jak ta na gorze tylko ze uzywam w nich "\n" zamiast endl
*/

/* ___________________
< typy zmiennych w c++ >
 -------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/

///liczby calkowite
int a;
int b=1;
/*
 _________________________________________
< podstawowe dzialania matematyczne w c++ >
 -----------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
    return 0;///main musi cos zwracac przyjelo sie ze zwraca 0 
}

///ta krowa to program z linuxa o nazwie cowsay
///napisy z /\| -_ są zrobione przy uzyciu programu figlet na linux