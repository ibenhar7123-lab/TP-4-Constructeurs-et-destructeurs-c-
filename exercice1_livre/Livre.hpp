// Livre.hpp - declaration de la classe Livre
#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;

    static int nbLivres;   // compteur partage par tous les objets (declaration)

public:
    Livre(std::string titre, std::string auteur, int annee);

    void afficher() const;

    static void afficherTotal();   // statique : appelable sans objet
};

#endif
