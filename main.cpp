#include <iostream>

/**
 * Un robot (robot) doit récupérer un objet (objet) sur un terrain rocheux adjacent à une route.
 * Le robot peut se déplacer à une vitesse plus rapide sur la route que sur le terrain rocheux,
 * il voudra donc le faire sur une certaine distance avant de se déplacer en ligne droite vers l'objet.
 * Cette fonction sert à calculer le temps total nécessaire au robot pour atteindre son objectif.
 * @return
 */


int main() {
    // 1. initiation des constantes
    const double dx=3.;
    const double dy=10.;
    const double s1=5.;
    const double s2=2.;
    const double l1=6.;

    // 2. calcul de L2
    // 2.1 calcul de L3 (distance verticale de L2)
    const double l3 = dy-l1;
    // 2.2 calcul de L2
    const double l2 = sqrt(pow(dx,2)+pow(l3,2));

    // 3. calcul du temps total nécessaire
    // 3.1 calcul du temps sur la route
    const double t1 = l1/s1;
    // 3.2 calcul du temps sur le terrain rocheaux
    const double t2 = l2/s2;
    // 3.3 calcul du temps total
    const double total = t1 + t2;

    // 4. affichage du résultat
    std::cout << "Si le robot parcourt " << l1 << "km sur la route,\n"
    << "alors il devra parcourir " << l2 << "km sur le terrain rocheux,\n"
    << "afin d'atteindre son objectif,\n"
    << "ce qui lui prendra en tout " << total << " heures.";
}
