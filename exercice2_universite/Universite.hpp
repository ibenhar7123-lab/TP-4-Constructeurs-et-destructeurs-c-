// Universite.hpp - declaration de la classe Universite
#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>

class Universite {
private:
    std::string nom;

public:
    explicit Universite(std::string nom);

    void afficherNom() const;
    const std::string& getNom() const;
};

#endif
