#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void GreetingMessage(string name);

int main(){

    string vardas;
    cin>>vardas;

    GreetingMessage(vardas);

    return 0;
}

void GreetingMessage(string name){

    string greeting = "Sveikas, " + name + "!";

    string first(greeting.length()+4, '*'); // +4, nes is abieju pusiu reikalingos zvaigzdutes ir tarpai
    string second("* " + string(greeting.length(), ' ') + " *");
    string third("* " + greeting + " *");
    string fourth("* " + string(greeting.length(), ' ') + " *");
    string fifth(greeting.length()+4, '*');

    cout << first << '\n' << second << '\n' << third << '\n' << fourth << '\n' << fifth;
}