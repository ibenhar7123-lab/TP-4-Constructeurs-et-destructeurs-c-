// Etudiant.cpp - definition de la classe Etudiant
#include "Etudiant.hpp"

#include <iostream>
#include <utility>

// Definition de l'attribut statique (une seule fois, dans un .cpp)
int Etudiant::nbEtudiants = 0;

Etudiant::Etudiant(std::string nom, int age, const Universite* universite)
    : nom(std::move(nom)), age(age), universite(universite) {
    ++nbEtudiants;
}

void Etudiant::afficher() const {
    std::cout << "Etudiant : " << nom << ", " << age << " ans\n";
    if (universite != nullptr) {
        universite->afficherNom();
    } else {
        std::cout << "Universite : (aucune)\n";
    }
    std::cout << "\n";
}

void Etudiant::afficherTotal() {
    std::cout << "Nombre total d'etudiants crees : " << nbEtudiants << "\n";
}
