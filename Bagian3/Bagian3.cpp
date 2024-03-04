
#include <iostream>
using namespace std;

int main()
{
    float nMat, nfisik, nRata;
    string status;


    cout << "Masukkan nila mtk: ";
    cin >> nMat;

    cout << "Masukkan nilai fisika: ";
    cin >> nfisik;


    nRata = (nMat + nfisik) / 2;

    if (nRata >= 60) {
        status = "lulus jalur ratarata";
    }
    else if (nMat >= 70)
    {
        status = "Lulsu jalur nilai matematika";
    }
    else
    {
        status = "Tidak lulus";
    }

    cout << status;
}

