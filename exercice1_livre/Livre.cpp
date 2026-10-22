// Livre.cpp - definition de la classe Livre
#include "Livre.hpp"

#include <iostream>
#include <utility>

// Definition (et initialisation) de l'attribut statique : une seule fois, dans un .cpp
int Livre::nbLivres = 0;

Livre::Livre(std::string titre, std::string auteur, int annee)
    : titre(std::move(titre)), auteur(std::move(auteur)), annee(annee) {
    ++nbLivres;
}

void Livre::afficher() const {
    std::cout << "Titre  : " << titre << "\n"
              << "Auteur : " << auteur << "\n"
              << "Annee  : " << annee << "\n\n";
}

void Livre::afficherTotal() {
    std::cout << "Nombre total de livres crees : " << nbLivres << "\n";
}
