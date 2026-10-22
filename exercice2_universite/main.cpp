// main.cpp - programme de test
#include "Etudiant.hpp"
#include "Universite.hpp"

int main() {
    // Appel statique sans aucun objet : doit afficher 0
    Etudiant::afficherTotal();

    // --- Partie 1 : universite sur la pile (exemple de l'enonce) ---
    Universite u("Universite de Casablanca");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal();   // Doit afficher 2

    // --- Partie 2 : universite sur le tas (gestion memoire avec new/delete) ---
    Universite* u2 = new Universite("Universite de Rabat");
    {
        Etudiant e3("Youssef", 22, u2);
        Etudiant e4("Salma", 19, u2);
        e3.afficher();
        e4.afficher();
    }                            // e3 et e4 detruits ici, AVANT delete u2
    delete u2;                   // l'universite doit vivre plus longtemps que ses etudiants
    u2 = nullptr;

    // Etudiant sans universite : le pointeur nul est gere
    Etudiant e5("Omar", 23, nullptr);
    e5.afficher();

    Etudiant::afficherTotal();   // 5 (compteur de creations)
    return 0;
}
