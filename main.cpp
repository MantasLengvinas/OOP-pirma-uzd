#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void greetingMessage(string name);

int main(){

    string vardas;
    cin>>vardas;

    greetingMessage(vardas);

    return 0;
}

string createGreeting(string name){

    if(name[name.length()-1] == 'a' || name[name.length()-1] == 'e'){
        return "Sveika, " + name + "!";
    }

    return "Sveikas, " + name + "!";

}

void greetingMessage(string name){

    string greeting = createGreeting(name);

    string first(greeting.length()+4, '*'); // +4, nes is abieju pusiu reikalingos zvaigzdutes ir tarpai
    string second("* " + string(greeting.length(), ' ') + " *");
    string third("* " + greeting + " *");
    string fourth("* " + string(greeting.length(), ' ') + " *");
    string fifth(greeting.length()+4, '*');

    cout << first << '\n' << second << '\n' << third << '\n' << fourth << '\n' << fifth;
}