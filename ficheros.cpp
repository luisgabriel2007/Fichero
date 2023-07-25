#include<iostream>
#include<fstream>
using namespace std;
int main (){
string a;
ofstream fich("ficha.bin");
cout<<"ingrese una palabra:";
cin>>a;
fich<<a;
}
