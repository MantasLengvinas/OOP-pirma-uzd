# Pasisveikinimas (1 užduotis)


## Programos veikimas
Paleidus programą, vartotojo yra paprašoma įvesti: 
* Savo vardą
* Rėmelio plotį (Įdėtas maksimalus rėmelio plotis - 100)

Tai padarius, programa parodo įrėmintą pasisveikinimą „Sveikas(-a), `vardas`“

* Įvedus didesnį skaičių nei yra leidžiama (100), programa yra sustabdoma ir parodomas klaidos pranešimas

## Programos diegimas ir naudojimas

* Parsisiųskite programos kodą iš [Releases](https://github.com/MantasLengvinas/OOP-pirma-uzd/releases)
* Jei naudojate Linux/Mac OS, tai naudokite šias komandas: 
```bash

    g++ -o main main.cpp
    ./main

```
* Jei naudojate Windows OS, tai naudokite šias komandas:
```bash

    g++ -o main main.cpp
    main

```
* Taip pat programos kodą galima įkelti į jūsų mėgiama IDE (pvz: CodeBlocks) ir tiesiog paleisti kodą
	
	
## Versijos
* [v1.0](https://github.com/MantasLengvinas/OOP-pirma-uzd/releases/tag/v1.0) Įvykdyti v1.0 reikalavimai: vartotojui leidžiama pasirinkti rėmelio plotį, taip pat rėmelio eilutės saugomos nebe skirtinguose kintamosiuose, o viename ```std::vector```
* [v0.2](https://github.com/MantasLengvinas/OOP-pirma-uzd/releases/tag/v0.2) Įvykdyti v0.2 reikalavimai: pagal įvestą varda parodyti skirtingą pasisveikinimą (Vyrams ir moterims)
* [v0.1](https://github.com/MantasLengvinas/OOP-pirma-uzd/releases/tag/v0.1) Įvykdyti v0.1 reikalavimai: saugoti kiekvieną eilutę atskirame kintamajame
