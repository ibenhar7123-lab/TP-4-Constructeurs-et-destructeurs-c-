#include "Livre.hpp"

int main() {
    Livre::afficherTotal();

    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    Livre::afficherTotal();


    {
        Livre l4("Germinal", "Emile Zola", 1885);
        Livre::afficherTotal();   // 4
    }
    Livre::afficherTotal();
    return 0;
}
