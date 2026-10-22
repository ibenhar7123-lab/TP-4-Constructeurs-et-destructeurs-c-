// Universite.cpp - definition de la classe Universite
#include "Universite.hpp"

#include <iostream>
#include <utility>

Universite::Universite(std::string nom) : nom(std::move(nom)) {}

void Universite::afficherNom() const {
    std::cout << "Universite : " << nom << "\n";
}

const std::string& Universite::getNom() const {
    return nom;
}
