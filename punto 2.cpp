#include <bits/stdc++.h>
using namespace std;

class CPersona {
private:
    string nombre;
    int edad;
    int dni;
    string genero;
    float peso;
    float altura;

    string comprobarGenero(string g) {
        return (g == "M" || g == "F") ? g : "H";
    }

public:
    CPersona(string n, int e, int Dni, string g, float p, float alt);

    string setName(string n);
    int setEdad(int e);
    int setDni(int Dni);
    string setGenero(string g);
    float setPeso(float p);
    float setAltura(float alt);
    int calcularIMC();
    bool esMayorDeEdad();
};

CPersona::CPersona(string n, int e, int Dni, string g, float p, float alt) {
    nombre = setName(n);
    edad = setEdad(e);
    dni = setDni(Dni);
    genero = setGenero(g);
    peso = setPeso(p);
    altura = setAltura(alt);
}

string CPersona::setName(string n) {
    nombre = n;
    return nombre;
}

int CPersona::setEdad(int e) {
    edad = e;
    return edad;
}

int CPersona::setDni(int Dni) {
    dni = Dni;
    return dni;
}

string CPersona::setGenero(string g) {
    genero = comprobarGenero(g);
    return genero;
}

float CPersona::setPeso(float p) {
    peso = p;
    return peso;
}

float CPersona::setAltura(float alt) {
    altura = alt;
    return altura;
}

int CPersona::calcularIMC() {
    float imc = peso / (altura * altura);
    if (imc < 20) {
        return -1;
    } else if (imc <= 25) {
        return 0;
    } else {
        return 1;
    }
}

bool CPersona::esMayorDeEdad() {
    bool flag = false;
    
    if(edad >=18){
        flag=true;
    }
    return flag;
}

int main() {
    string nombre;
    int edad;
    int dni;
    string genero;
    float peso;
    float altura;

    cout << "Ingrese nombre: ";
    getline(cin, nombre);

    cout << "Ingrese edad: ";
    cin >> edad;

    cout << "Ingrese DNI: ";
    cin >> dni;

    cout << "Ingrese genero (M / F): ";
    cin >> genero;

    cout << "Ingrese peso (en kg): ";
    cin >> peso;

    cout << "Ingrese altura (en metros): ";
    cin >> altura;

    CPersona persona(nombre, edad, dni, genero, peso, altura);

    cout << "Nombre: " << persona.setName(nombre) << endl;
    cout << "Mayor de edad: " << (persona.esMayorDeEdad() ? "Sí" : "No") << endl;
    cout << "DNI: " << persona.setDni(dni) << endl;
    cout << "Género: " << persona.setGenero(genero) << endl;
    cout << "IMC (bajo = -1, medio = 0, alto = 1): " << persona.calcularIMC() << endl;

    return 0;
}






