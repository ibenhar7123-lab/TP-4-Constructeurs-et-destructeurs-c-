CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g

all: exercice1_livre/livre exercice2_universite/etudiants

exercice1_livre/livre: exercice1_livre/main.cpp exercice1_livre/Livre.cpp exercice1_livre/Livre.hpp
	$(CXX) $(CXXFLAGS) exercice1_livre/main.cpp exercice1_livre/Livre.cpp -o $@

exercice2_universite/etudiants: exercice2_universite/main.cpp exercice2_universite/Etudiant.cpp exercice2_universite/Universite.cpp exercice2_universite/Etudiant.hpp exercice2_universite/Universite.hpp
	$(CXX) $(CXXFLAGS) exercice2_universite/main.cpp exercice2_universite/Etudiant.cpp exercice2_universite/Universite.cpp -o $@

run1: exercice1_livre/livre
	./exercice1_livre/livre

run2: exercice2_universite/etudiants
	./exercice2_universite/etudiants

clean:
	rm -f exercice1_livre/livre exercice2_universite/etudiants
