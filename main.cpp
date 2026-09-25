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
    const int l3 = dy-l1;
    // 2.2 calcul de L2
    const int l2 = sqrt(pow(dx,2)+pow(l3,2));

}
