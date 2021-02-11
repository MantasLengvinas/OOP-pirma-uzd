#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void greetingMessage(string name, int lines);

int main(){

    string name;
    int lines;

    cout << "Iveskite savo varda: "; cin >> name;
    cout << '\n';
    cout << "Iveskite korteles ploti (max: 100): "; cin >> lines; cout << '\n';
    if(lines > 100){
        cout << "Ivedete per dideli eiluciu skaiciu!";
        exit(1);
    }

    greetingMessage(name, lines);

    return 0;
}

string createGreetingText(string name){

    if(name[name.length()-1] == 'a' || name[name.length()-1] == 'e'){
        return "Sveika, " + name + "!";
    }

    return "Sveikas, " + name + "!";

}

void greetingMessage(string name, int lines){

    string greeting = createGreetingText(name);
    vector<string> message;

    message.push_back(string(greeting.length() + 4, '*')); //Pirma eilute

    for(int i = 1; i < lines / 2; i++){ //Uzpildymas tarpais
        message.push_back(string("* " + string(greeting.length(), ' ') + " *"));
    }

    message.push_back(string("* " + greeting + " *")); //Pasveikinimas

    for(int i = lines / 2; i < lines - 2; i++){ //Uzpildymas tarpais
        message.push_back(string("* " + string(greeting.length(), ' ') + " *"));
    }

    message.push_back(string(greeting.length() + 4, '*')); //Paskutine eilute
    
    //Isvedimas i ekrana
    for(string eil : message){
        cout << eil << '\n';
    }
}