#include <iostream>

using namespace std;

void zamien_znaki(char tb[], int roz) {
    int i=0;
    while(tb[i]!='\0') {
        tb[i++]=(char)((int)tb[i]-32);
    }

    i=0;
    while(tb[i]!='\0') {
        cout<<tb[i++];
    }

}


void licz_znaki(char tb[], int roz) {
    int i=0;
    int cyfry, literyD, literyM, reszta;

    cyfry=literyD=literyM=reszta=0;

    int znak_kod; //kod ASCII badanego znaku

    while(tb[i]!='\0') {
        znak_kod=(int)tb[i++];

        if(znak_kod>=97 && znak_kod<=122) {
            literyM++;
        } else if(znak_kod>=65 && znak_kod<=90) {
            literyD++;
        } else if(znak_kod>=48 && znak_kod<=57) {
            cyfry++;
        } else {
            reszta++;
        }


    }


    cout <<"Cyfry: "<<cyfry<<endl;
    cout <<"LiteryD: "<<literyD<<endl;
    cout <<"LiteryM: "<<literyM<<endl;
    cout <<"Reszta: "<<reszta<<endl;


}

int main() {
    const int rozmiar=20;

    char znaki[rozmiar];

    cin.getline(znaki, rozmiar);
    //licz_znaki(znaki, rozmiar);
    zamien_znaki(znaki, rozmiar);

    return 0;
}



