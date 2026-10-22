// Etudiant.hpp - declaration de la classe Etudiant
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

#include "Universite.hpp"

class Etudiant {
private:
    std::string nom;
    int age;
    const Universite* universite;   // association : pointeur NON proprietaire (pas de delete ici)

    static int nbEtudiants;         // compteur partage par tous les etudiants

public:
    Etudiant(std::string nom, int age, const Universite* universite);

    void afficher() const;

    static void afficherTotal();
};

#endif
