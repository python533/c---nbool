#include <iostream>
using namespace std;

int main(){
char isim[20],adres[20];
bool kosul=true;



//kosul içerisindeki true ifade karşılanmazsa buradaki while dögüsü çalışacaktır.
while (!kosul) {
std::cout << "İsim" << '\n';
cin.getline(isim,20);

std::cout << "Adres" << '\n';
cin.getline(adres,20);




return 0;
}


}
