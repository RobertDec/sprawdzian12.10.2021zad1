#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik("wsp.txt", ios::in);
    fstream wynik("wynik.txt", ios::out);
    int x, y;
    while (!plik.eof() == true){
        plik >> x >> y;
        if (x > 0 && y > 0) {
            wynik << x << " " << y << " I Cwiartka" << endl;
        }
        else if(x<0&&y>0){
            wynik << x << " " << y << " II Cwiartka" << endl;

        }
        else if (x < 0 && y<0) {
            wynik << x << " " << y << " III Cwiartka" << endl;

        }
        else {
            wynik << x << " " << y << " IV Cwiartka" << endl;

        }

    }
    return 0;
}
