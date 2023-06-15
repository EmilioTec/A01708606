#include "Complejo.hpp"
#include <iostream>

// Constructor por defecto
Complejo::Complejo() {
    real = 0;
    imaginario = 0;
}

// Constructor con parámetros
Complejo::Complejo(double r, double i) {
    real = r;
    imaginario = i;
}

// Métodos de acceso
double Complejo::getReal() const {
    return real;
}

void Complejo::setReal(double r) {
    real = r;
}

double Complejo::getImaginario() const {
    return imaginario;
}

void Complejo::setImaginario(double i) {
    imaginario = i;
}

// Método agregar
void Complejo::agregar(Complejo& otro) {
    real += otro.getReal();
    imaginario += otro.getImaginario();
}

// Método conjugado
Complejo Complejo::conjugado() {
    return Complejo(real, -imaginario);
}

// Método suma
Complejo Complejo::suma(Complejo& otro) {
    double sumaReal = real + otro.getReal();
    double sumaImaginario = imaginario + otro.getImaginario();
    return Complejo(sumaReal, sumaImaginario);
}

// Método multiplicacion
Complejo Complejo::multiplicacion(Complejo& otro) {
    double multReal = real * otro.getReal() - imaginario * otro.getImaginario();
    double multImaginario = real * otro.getImaginario() + imaginario * otro.getReal();
    return Complejo(multReal, multImaginario);
}

// Método multiEscalar
Complejo Complejo::multiEscalar(double escalar) {
    double multReal = real * escalar;
    double multImaginario = imaginario * escalar;
    return Complejo(multReal, multImaginario);
}

// Método imprime
void Complejo::imprime() {
    if (imaginario >= 0) {
        std::cout << "(" << real << " + " << imaginario << "i)";
    } else {
        std::cout << "(" << real << " - " << -imaginario << "i)";
    }
}


