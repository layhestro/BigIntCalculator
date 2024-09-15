#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAILLE_MAX 100000






/* 
But : 

Paramètre(s) :

Valeur de retour :

Commentaire(s) : 

Fait intervenir les fonctions suivantes : 
*/




//-------------------------------------------------------------------------------------------------------------
/*
But : 
Cette fonction met un nombre entré au clavier par l'utilisateur sous forme d'une chaine de charactère dynamique.

Paramètre(s) : 
Une chaine de charactère invitant l'utilisateur à écrire.

Valeur de retour : 
Renvoi le nombre entier inseré dans une chaine dynamique apres avoir controlé l'input et avoir normalisé son format.

Commentaire(s) : /

Fait intervenir les fonctions suivantes :  
Verification_du_format_de_la_chaine 
normalisation du format
*/
char* LireGrandEntier(char invitation[]);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/*
But : 
Cette fonction regarde si le nombre inséré est négatif.

Paramètre(s) : 
La chaine de charactères insérée.

Valeur de retour : 
Soit 0 si positif.
Soit 1 si négatif.

Commentaire(s) : /

Fait intervenir les fonctions suivantes : /
*/
int est_ce_un_nombre_negatif(char* Nombre);
//---------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/*
But : 
Cette fonction vérifie si des symboles autres que des nombres ont été insérer par l'utilisateur lors de la saisie au clavier (parmi les charactère ASCII).

Paramètre(s) : 
La chaine de charactères insérée. 
Un entier (0/1) qui indique le signe du nombre.

Valeur de retour : 
Soit 0 si l'utilisateur n'a rien inséré, si il n'a pas inséré de nombre ou si il y a des charactères qui ne sont pas des nombres.
Soit 1 si aucune erreur n'est détecée.

Commentaire(s) : /

Fait intervenir les fonctions suivantes : /

*/
int Verification_du_format_de_la_chaine(char* nombre_a_evaluer, int signe);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Cette fonction enleve d'eventuels zeros devant le nombre à normaliser, met le signe devant le nombre (00123 -> +123 et -00045 -> -45) et met ce dit nombre dans une chaine dynamique.

Paramètre(s) :  
la chaine de char contenant le nombre à normaliser.
un entier (0/1) qui indique le signe du nombre. 

Valeur de retour :  
Un pointeur sur le tableau dynamique crée.

Commentaire(s) : 
! ALLOCATION DYNAMIQUE ! => Free

Fait intervenir les fonctions suivantes :
decalage_vers_la_droite
InitialiserGrandEntier
*/
char* NormaliserGrandEntier(char* nombre_a_normaliser, unsigned int signe_moins);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/*
But : 
Décaler tout les éléments du tableau d'un espace vers la "droite".

Paramètre(s) : 
Le tableau sur lequel on travaille.

Valeur de retour : /

Commentaire(s) :  !! Attention à utiliser sur un tableau avec minimum +1 espace disponible.

Fait intervenir les fonctions suivantes : /
*/
void decalage_vers_la_droite(char* tableau);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Afficher le nombre avec un "." pour séparer les milliers.

Paramètre(s) : 
la chaine à afficher

Valeur de retour : /  

Commentaire(s) : /

Fait intervenir les fonctions suivantes : /
*/
void AfficherGrandEntier(char* nomber_a_affiche);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But :  
Inverser le nombre voulu.

Paramètre(s) : 
la chaine à inverser.

Valeur de retour : /  

Commentaire(s) : /

Fait intervenir les fonctions suivantes : /
*/
void inversion_tab(char* tab_a_inverser);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Compare le premier nombre avec le deuxieme et indique si il est plus petit/egal/plus grand.

Paramètre(s) :
Le nombre qui va etre comparer.
Le nombre qui compare.

Valeur de retour :
Soit -1 si n1 < n2.
Soit 0 si n1 = n2.
Soit 1 si n1 > n2

Commentaire(s) : Dans un souci de clartée, j'ai ajouté une énumeration pour représenter -1/0/1

Fait intervenir les fonctions suivantes : /
*/
int ComparerGrandsEntiers(char* je_suis_compare, char* je_compare);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/*
But : 
Dire à l'utilisateur lequel des 2 nombres sélectionés est le plus grand.

Paramètre(s) :
Les 2 nombres à comparer.

Valeur de retour : /

Commentaire(s) : 
J'ai utilisé une comparaison switch car je ne l'ai jamais utilisé avant et je voulais comprend comment ça fonctionnait.

Fait intervenir les fonctions suivantes : 
ComparerGrandsEntiers
*/
void Comparer_et_Afficher(char* c1, char* c2);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Changer le signe du nombre.

Paramètre(s) :
Le nombre dont on veut changer le signe

Valeur de retour : /

Commentaire(s) : /

Fait intervenir les fonctions suivantes : / 
*/
void ChangerSigneGrandEntier(char* nombre);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Transformer un nombre entier positif à une décimal en chaine de charactére dynamique.

Paramètre(s) :
l'entier à transfomer

Valeur de retour :
Une chaine dynamique avec l'entier et le signe "+".

Commentaire(s) : 
Cette fonction est uniquement limité au entier positif à une décimal.
! ALLOCATION DYNAMIQUE ! => Free

Fait intervenir les fonctions suivantes : /
*/
char* InitialiserGrandEntier(int entier_a_initialiser);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Créer un tableau contenant des nombres sous la fomre de chaines dynamiques.

Paramètre(s) :
Un pointeur sur le nombre de ligne.

Valeur de retour :
Un pointeur sur le 1er élement du tableau.

Commentaire(s) : 

Fait intervenir les fonctions suivantes : 
LireGrandEntier
LibererTableauGrandsEntiers
*/
char** LireTableauGrandsEntiers(unsigned int* nombre_de_ligne);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Afficher le tableau

Paramètre(s) :
Un pointeur sur le 1er élement du tableau.
Le nombre de ligne 

Valeur de retour : /

Commentaire(s) : /

Fait intervenir les fonctions suivantes : 
AfficherGrandEntier
*/
void AfficherTableauGrandsEntiers(char** Tableau_a_afficher, unsigned int nombre_de_ligne);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Liberer le tableau

Paramètre(s) :
Un pointeur sur le 1er élement du tableau.
Le nombre de ligne 

Valeur de retour : /

Commentaire(s) : /

Fait intervenir les fonctions suivantes : /
*/
void LibererTableauGrandsEntiers(char** tableau_a_desallouer, unsigned int nombre_de_ligne);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Sommer 2 nombres entiers positif ou négatif stocké dans des chaines de charactères.

Paramètre(s) :
Les 2 chaines à sommer.

Valeur de retour : 
La somme des 2 nombres stocké dans une chaine dynamique et normaliser.

Commentaire(s) : 
J'ai travaillé sur la partie addition et soustraction de cette fct avec plusieurs jours d'intervals et
je suis arrivé à 2 raisonnements très differents pour les deux parties.

Fait intervenir les fonctions suivantes : 
NormaliserGrandEntier
ChangerSigneGrandEntier
ComparerGrandsEntiers
inversion_tab
*/
char* SommerGrandsEntiers(char* n1, char* n2);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Multiplier 2 nombres entiers positif ou négatif stocké dans des chaines de charactères.

Paramètre(s) :
Les 2 chaines à multiplier.

Valeur de retour : 
Le produit des 2 nombres stocké dans une chaine dynamique et normaliser.

Commentaire(s) : 
Cette fct n'est que une boucle construite avec les fct intialiser, comparer, sommer 
et dans laquelle on appele la fct somme le nombre de fois voulus.

Fait intervenir les fonctions suivantes : 
InitialiserGrandEntier
ChangerSigneGrandEntier
ComparerGrandsEntiers
SommerGrandsEntiers
*/
char* MultiplierGrandsEntiers(char* n1, char* n2);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
Mettre un nombres entiers positif ou négatif stocké dans des chaines de charactères à unn puissance voulue.

Paramètre(s) :
Une chaine de char qui est la base.
Une chaine de char qui est l'exposant.

Valeur de retour : 
Une chaine de char avec la puissance.

Commentaire(s) : 
Cette fct n'est que une boucle construite avec les fct intialiser, comparer, sommer 
et dans laquelle on appele la fct mulitiplier le nombre de fois voulus.
Cette fct donne la valeur absolue de la puissance et non la valeur réel.

Fait intervenir les fonctions suivantes : 
InitialiserGrandEntier
ChangerSigneGrandEntier
ComparerGrandsEntiers
SommerGrandsEntiers
MultiplierGrandsEntiers
*/
char* PuissanceGrandEntier(char* Base, char* exposant);
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
/* 
But : 
faire la factorielle d'un nombres entiers positif ou négatif stocké dans des chaines de charactères.

Paramètre(s) :
Une chaine de char qui est le nombre à faire la factorielle.

Valeur de retour : 
Une chaine de char avec la factorielle.

Commentaire(s) : 
Cette fct n'est que une boucle construite avec les fct intialiser, comparer, sommer 
et dans laquelle on appele la fct mulitiplier le nombre de fois voulus.


Fait intervenir les fonctions suivantes : 
InitialiserGrandEntier
ChangerSigneGrandEntier
ComparerGrandsEntiers
SommerGrandsEntiers
MultiplierGrandsEntiers
*/
char* FactorielleGrandEntier(char* n1);
//-------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------
char* SommerTableauGrandsEntiers(char** tab, unsigned int taille);
//-------------------------------------------------------------------------------------------------------------

void MaximumTableauGrandsEntiers(char** tab, unsigned int taille, int* Max);
void MinimumTableauGrandsEntiers(char** tab, unsigned int taille, int* Min);
void ExtremaTableauGrandsEntiers(char** tab, unsigned int taille, int* Max, int* Min);
char** ExtraireTableauGrandsEntiers(char* Origine, unsigned int* Taille);
char* Division_partie_entiere(char* dividende, char* diviseur);

//-------------------------------------------------------------------------------------------------------------
enum Comparaison {
    
    PLUS_PETIT = -1,
    EGAUX,
    PLUS_GRAND,
};
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
int main() {
    
    unsigned int nombre_lignes = 2;
    char** tab = LireTableauGrandsEntiers(&nombre_lignes);
    if (tab == NULL)
        return -1;

    AfficherTableauGrandsEntiers(tab, nombre_lignes);
    
    
    char* somme = SommerGrandsEntiers(tab[0], tab[1]);
    if (somme == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        return -1;
    }
    printf("La somme est : ");
    AfficherGrandEntier(somme);
    free(somme);


    char* multi = MultiplierGrandsEntiers(tab[0], tab[1]);
    if (multi == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        free(somme);
        return -1;
    }
    printf("Le produit est : ");
    AfficherGrandEntier(multi);
    free(multi);

    

    char* Puissance = PuissanceGrandEntier(tab[0], tab[1]);
    if (Puissance == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        return -1;
    }
    printf("La puissance est : ");
    AfficherGrandEntier(Puissance);
    free(Puissance);


    char* somme_tab = SommerTableauGrandsEntiers(tab, nombre_lignes);
    if (somme_tab == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        return -1;
    }
    printf("La somme du tab est : ");
    AfficherGrandEntier(somme_tab);
    free(somme_tab);


    char* facto = FactorielleGrandEntier(tab[0]);
    if (facto == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        return -1;
    }
    printf("La facto est : ");
    AfficherGrandEntier(facto);
    free(facto);

    int max = 0;
    MaximumTableauGrandsEntiers(tab, nombre_lignes, &max);
    puts(" le max du tableau est :");
    puts(tab[max]);

    int min = 0;
    MinimumTableauGrandsEntiers(tab, nombre_lignes, &min);
    puts(" le min du tableau est :");
    puts(tab[min]);

    
    int e1 = 0;
    int e2 = 0;
    ExtremaTableauGrandsEntiers(tab, nombre_lignes, &e1, &e2);
    puts(" les extrema sont : ");
    puts(tab[e1]);
    puts(tab[e2]);
    
    

    
    
    char* a = Division_partie_entiere(tab[0], tab[1]);
    if (a == NULL) {
        LibererTableauGrandsEntiers(tab, nombre_lignes);
        return -1;
    }
    puts("la division entiere vaut : ");
    AfficherGrandEntier(a);
    
    

    LibererTableauGrandsEntiers(tab, nombre_lignes);

    /*
    printf("\n");
    unsigned int taille = 0;
    char* origine = "+123;-564;+864656;-321;78;";
    char** T2 = ExtraireTableauGrandsEntiers(origine, &taille);
    // AfficherTableauGrandsEntiers(T2, taille);
    LibererTableauGrandsEntiers(T2 , taille);
    */


    return 0;
}
//-------------------------------------------------------------------------------------------------------------




//-------------------------------------------------------------------------------------------------------------
char* LireGrandEntier(char invitation[]) {

    // je peux inserer un nombre jusque TAILLE_MAX
    // +2 car il me faut une place pour le /0 et une place pour un eventuel "+".
    char buffer[TAILLE_MAX+2];
	printf("%s",invitation);
    
    unsigned int Format_valide = 1;
    unsigned int signe_moins = 0;

    do {
    
    if (!Format_valide)
        printf("Une erreur a ete trouve dans votre input, veulliez choisir un nouvel input : ");
    
    gets_s(buffer, TAILLE_MAX+1);
    
    signe_moins = est_ce_un_nombre_negatif(buffer);
    
    Format_valide = Verification_du_format_de_la_chaine(buffer, signe_moins);
    
    } while (!Format_valide);
    
    char* Nombre = NormaliserGrandEntier(buffer, signe_moins);
    
    return Nombre;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
int est_ce_un_nombre_negatif(char* Nombre) {

    unsigned int signe_moins = 0;

    for (unsigned int i = 0; i < strlen(Nombre); i++)
    {
        if ((Nombre[i] >= '0' && Nombre[i] <= '9'))
            break;
        
        if (Nombre[i] == '-')
            signe_moins = 1;
    }
    
    return signe_moins;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
int Verification_du_format_de_la_chaine(char* nombre_a_evaluer, int signe) {
    
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int A = 1;

    while (i < (strlen(nombre_a_evaluer) + 1) )
    {
        // je check si chaque element de ma chaine est un nombre ou si j'arrive à '\0'
        if ( (nombre_a_evaluer[i] >= '0' && nombre_a_evaluer[i] <= '9') || nombre_a_evaluer[i] == '\0')
        {
            nombre_a_evaluer[j] = nombre_a_evaluer[i];
            j++;
        }
        i++;
    }

    if (!strlen(nombre_a_evaluer))
        return 0;
    
    if (i != j + signe)
        return 0;    

    return 1;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* NormaliserGrandEntier(char* nombre_a_normaliser, unsigned int signe_moins) {

    char* Nombre;
    // je crée un espace pour le signe et je le met au début de la chaine.
    if (!signe_moins) {
        decalage_vers_la_droite(nombre_a_normaliser);
        nombre_a_normaliser[0] = '+';
    }

    else if (signe_moins) {
        decalage_vers_la_droite(nombre_a_normaliser);
        nombre_a_normaliser[0] = '-';
    }

    
    unsigned int ecart = 1;
    // calcul de l'ecart entre le 1er nombre significatif et d'eventuels 0 devant le nombre  
    while (nombre_a_normaliser[ecart] == '0')
    {
        ecart++;
    }

    // je traite le cas spécifique => +/- 000000000000000000000 => +0
    if (ecart == strlen(nombre_a_normaliser))
    {
        Nombre = InitialiserGrandEntier(0);
        return Nombre;
    }

    // enlever 1 car ne pas oublier que je l'ai initialiser à 1 pour ignorer le signe.
    ecart--;
    // je supprime les 0 avant le nombre
    for (unsigned int i = 1; (i + ecart) < (strlen(nombre_a_normaliser) + 1); i++)
    {
        nombre_a_normaliser[i] = nombre_a_normaliser[i+ecart];
    }

    Nombre = (char*) malloc((strlen(nombre_a_normaliser) + 1) * sizeof(char));
    if (Nombre == NULL) 
        return NULL;

    strcpy_s(Nombre, (strlen(nombre_a_normaliser) + 1) , nombre_a_normaliser);

    return Nombre;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void decalage_vers_la_droite(char* tableau) {

    for (int i = strlen(tableau); i >= 0; i--)
    {
        tableau[i+1] = tableau[i];
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void AfficherGrandEntier(char* nomber_a_affiche) {
        
    unsigned int taille = strlen(nomber_a_affiche);
    
    unsigned int ecart = 0;
    unsigned int i = 0;
    
    if (taille % 3 == 0)
        ecart = 3;
    
    else if (taille % 3 == 1)
        ecart = 4;
    
    else if (taille % 3 == 2)
        ecart = 2;
    
    // j'affiche le signe
    printf("%c ",nomber_a_affiche[i]);
    for (i = 1; i < ecart; i++) {
        printf("%c",nomber_a_affiche[i]);
        // si je rencontre la fin de la chaine, j'exit
        if (nomber_a_affiche[i] == '\0')
            break;
    }
    
    for (i; i < taille; i+=3) {
        // j'affiche les nombre par bloc de 3 avec un séparateur devant
        printf(".%c%c%c", nomber_a_affiche[i], nomber_a_affiche[i+1], nomber_a_affiche[i+2]);
    }
    printf("\n");
    }
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void inversion_tab(char* tab_a_inverser) {

    char buffer;
    unsigned int dernier_element = strlen(tab_a_inverser) - 1;

    // Je ne dois aller que jusqu'a la moitiée du tableau.
    unsigned int taille = (strlen(tab_a_inverser) / 2);
    
    for (unsigned int i = 0; i < taille; i++)
    {
        buffer = tab_a_inverser[i];
        tab_a_inverser[i] = tab_a_inverser[dernier_element - i];
        tab_a_inverser[dernier_element - i] = buffer;
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
int ComparerGrandsEntiers(char* je_suis_compare, char* je_compare) {
    
    unsigned int taille_C1 = strlen(je_suis_compare);
    unsigned int taille_C2 = strlen(je_compare);

    // je considère tous les cas de figure en commencant par le plus simple.

    // j'ai 1 nombre positif et un nombre négatif
    if (je_suis_compare[0] == '-' && je_compare[0] == '+')
        return PLUS_PETIT;
    else if (je_suis_compare[0] == '+' && je_compare[0] == '-')
        return PLUS_GRAND;
    
    // les 2 nombres sont de même signe.
    else
    {
        // C1 est plus petit que C2
        if (taille_C1 < taille_C2)
        {
            // si ils sont positif alors C1 < C2
            if (je_suis_compare[0] == '+')  
                return PLUS_PETIT;
            // si ils sont négatif alors C1 > C2
            if (je_suis_compare[0] == '-')  
                return PLUS_GRAND;
        }
        // C1 est plus grand que C2
        else if (taille_C1 > taille_C2)
        {
            // si ils sont positif alors C1 > C2
            if (je_suis_compare[0] == '+')  
                return PLUS_GRAND;
            // si ils sont négatif alors C1 < C2
            if (je_suis_compare[0] == '-')  
                return PLUS_PETIT;
        }
        // dans le pire des cas, cad quand les 2 nombres sont de même signe et de même taille
        // je vais comparer le code ASCII des char de la chaine, jusqu'à avoir une différence ou
        // de conclure que ce sont les mêmes nombres.
        else
        {
            for (unsigned int  i = 1; i < taille_C1; i++)
            {
                if (je_suis_compare[i] < je_compare[i])
                {
                    if (je_suis_compare[0] == '+')
                        return PLUS_PETIT;
                    if (je_suis_compare[0] == '-')  
                        return PLUS_GRAND;
                }
                else if (je_suis_compare[i] > je_compare[i])
                {
                    if (je_suis_compare[0] == '+')
                        return PLUS_GRAND;
                    if (je_suis_compare[0] == '-')  
                        return PLUS_PETIT;
                }
            }
        }
    }
    return EGAUX;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void Comparer_et_Afficher(char* c1, char* c2) {

    int comparaison = ComparerGrandsEntiers(c1, c2);
    
    // j'utilise un switch au lieu d'un if car je voulais tester ce type de condition
    switch (comparaison)
    {
    case PLUS_PETIT:
        printf("%s est plus petit que %s\n",c1,c2);
        break;
    case EGAUX:
        printf("%s est egale a %s\n",c1,c2);
        break;
    case PLUS_GRAND:
        printf("%s est plus grand que %s\n",c1,c2);
        break;
    default:
        break;
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void ChangerSigneGrandEntier(char* nombre) {
    
    if (nombre[0] == '-')
        nombre[0] = '+';
    else
        nombre[0] = '-';
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* InitialiserGrandEntier(int entier_a_initialiser) {
	
	char* Nombre = (char*) malloc( 3 * sizeof(char));
	if (Nombre == NULL)
		return NULL;
    Nombre[0] = '+';
	Nombre[1] = entier_a_initialiser + '0';
    Nombre[2] = '\0';

	return Nombre;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char** LireTableauGrandsEntiers(unsigned int* nombre_de_ligne) {

    char** tableau_de_nombre = (char**) malloc(sizeof(char*) * (*nombre_de_ligne));
    if (tableau_de_nombre == NULL)
        return NULL;
    
    for (unsigned int i = 0; i < (*nombre_de_ligne); i++)
    {
        tableau_de_nombre[i] = LireGrandEntier("Votre input : ");
        if (tableau_de_nombre[i] == NULL) {
            LibererTableauGrandsEntiers(tableau_de_nombre, i);
            return NULL;
        }

    }
    return tableau_de_nombre;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void AfficherTableauGrandsEntiers(char** Tableau_a_afficher, unsigned int nombre_de_ligne) {

    for (unsigned int i = 0; i < nombre_de_ligne; i++)
    {
        AfficherGrandEntier(Tableau_a_afficher[i]);
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void LibererTableauGrandsEntiers(char** tableau_a_desallouer, unsigned int nombre_de_ligne) {
    
    for (unsigned int i = 0; i < nombre_de_ligne; i++)
    {
        free(tableau_a_desallouer[i]);
    }
    free(tableau_a_desallouer);
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* SommerGrandsEntiers(char* n1, char* n2) {

    // +3 car je dois avoir de la place pour :
    // le /0
    // l'eventuel carry
    // le signe
    char nombre[TAILLE_MAX + 3];
    char* nombre_renvoyer;
    unsigned int i = 0;
    unsigned int taille_n1 = strlen(n1);
    unsigned int taille_n2 = strlen(n2);
    int terme_1;
    int terme_2;
    int resultat = 0;
    int carry = 0;
    unsigned int signe_moins = 0;
    int resultat_comparaison;
    int trackeur_de_signe;
    char Valeur_abs_Haute[TAILLE_MAX+2];
    char Valeur_abs_Basse[TAILLE_MAX+2];


    // Les nombres ont le même signe alors c'est une addition.
    // --------------------------ADDITION-------------------------
    if (n1[0] == n2[0]) 
    {
        if (n1[0] == '-')
            signe_moins = 1;
        
        inversion_tab(n1);
        inversion_tab(n2);

        //  taille -1 car je ne veux pas faire d'opération arithmétique sur le signe
        while (i < taille_n1 - 1 || i < taille_n2 - 1)
        {
            terme_1 = 0;
            if (i < taille_n1 - 1)
                terme_1 = (n1[i] - '0');
            
            terme_2 = 0;
            if (i < taille_n2 - 1)
                terme_2 = (n2[i] - '0');

            resultat = (terme_1 + terme_2 + carry) % 10;
            carry = (terme_1 + terme_2 + carry) / 10;
            nombre[i] = resultat + '0';
            
            i++;
        }
        
        
        if (carry) {
            nombre[i] = carry + '0';
            nombre[i+1] = '\0';
        }
        else
            nombre[i] = '\0';

        inversion_tab(n1);
        inversion_tab(n2);
        inversion_tab(nombre);
    }
    // -----------------------------------------------------------



    // Les nombres ont un signe différent alors c'est une soustraction.
    // Je vais toujours soustraire la plus grand valeur absolue à la plus petit valeur absolue.
    // --------------------------SOUSTRACTION-------------------------
    else if (n1[0] != n2[0])
    {
        // Première étape, je change le signe du nombre négatif et je compare les 2 nombres pour savoir lequel est le plus grand.
        if (n1[0] == '-') 
        {
            ChangerSigneGrandEntier(n1);
            trackeur_de_signe = 1;
        }
        if (n2[0] == '-') 
        {
            ChangerSigneGrandEntier(n2);
            trackeur_de_signe = 2;
        }

        resultat_comparaison = ComparerGrandsEntiers(n1, n2);
        if (resultat_comparaison == EGAUX) 
        {
            nombre_renvoyer = InitialiserGrandEntier(0);
            if (trackeur_de_signe == 1)
                ChangerSigneGrandEntier(n1);
            if (trackeur_de_signe == 2)
                ChangerSigneGrandEntier(n2);
            return nombre_renvoyer;
        }

        if (trackeur_de_signe == 1 && resultat_comparaison == PLUS_GRAND)
            signe_moins = 1;
        
        if (trackeur_de_signe == 2 && resultat_comparaison == PLUS_PETIT)
            signe_moins = 1;


        // deuxième étape, je met le plus grand nombre dans VAH et le plus petit dans VAB, 
        // j'inverse les tableaux crée
        // et je remet le signe négatif au tableau d'origine
        
        if (resultat_comparaison == PLUS_GRAND)
        {
            strcpy_s(Valeur_abs_Haute, TAILLE_MAX+2, n1);
            strcpy_s(Valeur_abs_Basse, TAILLE_MAX+2, n2);
        }
        if (resultat_comparaison == PLUS_PETIT)
        {
            strcpy_s(Valeur_abs_Haute, TAILLE_MAX+2, n2);
            strcpy_s(Valeur_abs_Basse, TAILLE_MAX+2, n1);
        }
        
        inversion_tab(Valeur_abs_Haute);
        inversion_tab(Valeur_abs_Basse);

        if (trackeur_de_signe == 1)
            ChangerSigneGrandEntier(n1);
        if (trackeur_de_signe == 2)
            ChangerSigneGrandEntier(n2);

        // 3eme étapes je fais la soustraction.
        for (i = 0; i < strlen(Valeur_abs_Haute) - 1; i++)
        {
            terme_1 = Valeur_abs_Haute[i] - '0';
            terme_2 = 0;
            if (i < strlen(Valeur_abs_Basse) - 1)
                terme_2 = Valeur_abs_Basse[i] - '0';
            
            resultat = terme_1 - terme_2 - carry;
            if (resultat < 0) 
            {
                resultat += 10;
                carry = 1;
            }
            else
                carry = 0;
            
            nombre[i] = resultat + '0';
        }
        nombre[i] = '\0';
        inversion_tab(nombre);
    }
    // ---------------------------------------------------------------
    
    nombre_renvoyer = NormaliserGrandEntier(nombre, signe_moins);
    return nombre_renvoyer;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* MultiplierGrandsEntiers(char* n1, char* n2) {

    unsigned int Taille1 = strlen(n1);
    unsigned int Taille2 = strlen(n2);
    int carry;
    int facteur_1 = 0;
    int facteur_2 = 0;
    int produit = 0;
    int i;
    int j;
    unsigned int decalage = 0;
    unsigned int signe_moins = 0;

    char Resultat[TAILLE_MAX];
    
    char* Buffer_temp_1;
    char* Buffer = InitialiserGrandEntier(0);
    if (Buffer == NULL)
        return NULL;
    
    if (n1[0] != n2[0])
        signe_moins = 1;
    
    inversion_tab(n1);
    inversion_tab(n2);

    for (i = 0; i < (Taille2 - 1); i++)
    {
        facteur_2 = n2[i] - '0';
        carry = 0;
        for (int k = 0; k < decalage; k++)
        {
                Resultat[k] = '0';
        }
        for (j = 0; j < (Taille1 - 1); j++)
        {
            facteur_1 = n1[j] - '0';
            produit = (facteur_1 * facteur_2 + carry) % 10;
            carry = (facteur_1 * facteur_2 + carry) / 10;
            Resultat[j + decalage] = produit + '0';
        }
        
        if (carry > 0) {
            Resultat[j + decalage] = carry + '0';
            Resultat[j + decalage + 1] = '\0';
        }
        if (!carry)
            Resultat[j + decalage] = '\0';
        
        inversion_tab(Resultat);
        
        char* Buffer_temp_2 = NormaliserGrandEntier(Resultat, 0);
        if (Buffer_temp_2 == NULL) {
            free(Buffer);
            return NULL;
        }
        Buffer_temp_1 = SommerGrandsEntiers(Buffer, Buffer_temp_2);
        if (Buffer_temp_1 == NULL) {
            free(Buffer);
            free(Buffer_temp_2);
            return NULL;
        }
        free(Buffer_temp_2);
        free(Buffer);
        Buffer = Buffer_temp_1;

        decalage++;
    }
    inversion_tab(n1);
    inversion_tab(n2);

    if (signe_moins == 1)
        Buffer[0] = '-';

    return Buffer;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* FactorielleGrandEntier(char* n1) {

    
    unsigned int signe_moins = 0;
    if (n1[0] == '-')
        signe_moins = 1;

    unsigned int trackeur_de_signe = 0;
    if (signe_moins) {
        ChangerSigneGrandEntier(n1);
        trackeur_de_signe = 1;
    }

    char* buffer_temp;
    char* buffer = InitialiserGrandEntier(1);
    if (buffer == NULL)
        return NULL;

    char* compteur_temp;
    char* compteur = InitialiserGrandEntier(1);
    if (compteur == NULL) {
        free(buffer);
        return NULL;
    }
    char Increment[3] = "+1";
    
    while (ComparerGrandsEntiers(compteur, n1) != PLUS_GRAND)
    {
        buffer_temp = MultiplierGrandsEntiers(buffer,compteur);
        if (buffer_temp == NULL) {
            free(buffer);
            free(compteur);
            return NULL;
        }
        free(buffer);
        buffer = buffer_temp;
        
        compteur_temp = SommerGrandsEntiers(compteur, Increment);
        if (compteur_temp == NULL) {
            free(compteur);
            free(buffer);
            return NULL;
        }
        free(compteur);
        compteur = compteur_temp;
    }

    if (trackeur_de_signe == 1) {
        ChangerSigneGrandEntier(n1);
    }

    free(compteur);
    
    return buffer;

}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* PuissanceGrandEntier(char* Base, char* exposant) {
    
    unsigned int trackeur_de_signe_base = 0;
    unsigned int trackeur_de_signe_expo = 0;
    if (Base[0] == '-') 
    {
        ChangerSigneGrandEntier(Base);
        trackeur_de_signe_base = 1;
    }
    if (exposant[0] == '-') 
    {
        ChangerSigneGrandEntier(exposant);
        trackeur_de_signe_expo = 1;
    }

    char* Puissance_temp;
    char* Puissance = InitialiserGrandEntier(1);
    if (Puissance == NULL) 
        return NULL;
    
    char* compteur_temp;
    char* compteur = InitialiserGrandEntier(0);
    if (compteur == NULL) {
        free(Puissance);
        return NULL;
    }

    char Increment[3] = "+1";

    // renvoier 1 si exposant 0
    if (strcmp(compteur,exposant) == 0) 
    {
        free(compteur);
        return Puissance;
    }
    
    while (ComparerGrandsEntiers(compteur, exposant) == PLUS_PETIT)
    {
        // puissance
        Puissance_temp = MultiplierGrandsEntiers(Puissance, Base);
        if (Puissance_temp == NULL) {
            free(Puissance);
            free(compteur);
            return NULL;
        }
        free(Puissance);
        Puissance = Puissance_temp;

        
        // compteur
        compteur_temp = SommerGrandsEntiers(compteur, Increment);
        if (compteur_temp == NULL) {
            free(Puissance);
            free(compteur);
            return NULL;
        }
        free(compteur);
        compteur = compteur_temp;
    }
    
    if (trackeur_de_signe_base) {
        ChangerSigneGrandEntier(Base);
        if ((exposant[strlen(exposant)] % 2 == 0))
            ChangerSigneGrandEntier(Puissance);
    }
    if (trackeur_de_signe_expo)
        ChangerSigneGrandEntier(exposant);

    free(compteur);

    return Puissance;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* SommerTableauGrandsEntiers(char** tab, unsigned int taille) {

    char* buffer_temp;
    char* buffer = InitialiserGrandEntier(0);
    if (buffer == NULL)
        return NULL;
    
    for (unsigned int i = 0; i < taille; i++)
    {
        buffer_temp = SommerGrandsEntiers(buffer, tab[i]);
        if (buffer_temp == NULL) {
            free(buffer);
            return NULL;
        }
        free(buffer);
        buffer = buffer_temp;
    }
    return buffer;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void MaximumTableauGrandsEntiers(char** tab, unsigned int taille, int* Max) {
    
    int comparaison;
    char* Buffer = tab[0];
    for (unsigned int i = 1; i < taille; i++)
    {
        comparaison = ComparerGrandsEntiers(Buffer, tab[i]);
        if (comparaison == PLUS_PETIT) {
            *Max = i;
            Buffer = tab[i];
        }
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void MinimumTableauGrandsEntiers(char** tab, unsigned int taille, int* Min) {
    
    int comparaison;
    char* Buffer = tab[0];
    for (unsigned int i = 1; i < taille; i++)
    {
        comparaison = ComparerGrandsEntiers(Buffer, tab[i]);
        if (comparaison == PLUS_GRAND) {
            *Min = i;
            Buffer = tab[i];
        }
    }
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
void ExtremaTableauGrandsEntiers(char** tab, unsigned int taille, int* Max, int* Min) {

    MaximumTableauGrandsEntiers(tab, taille, Max);
    MinimumTableauGrandsEntiers(tab, taille, Min);    
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char** ExtraireTableauGrandsEntiers(char* Origine, unsigned int* Taille) {
    
    unsigned int i = 0;
    while (Origine[i] != '\0')
    {
        if (Origine[i] == ';')
            (*Taille)++;
        i++;
    }
    char** tab_extrait = (char**) malloc(sizeof(char*) * (*Taille));
    if (tab_extrait == NULL) {
        return NULL;
    }
    i = 0;
    unsigned int j = 0;
    unsigned int k = 0;
    char buffer[TAILLE_MAX];
    while (Origine[i] != '\0')
    {
        if (Origine[i] == ';') {
            buffer[j] = '\0';
            tab_extrait[k] = malloc(sizeof(char) * (strlen(buffer) + 1));
            if (tab_extrait[k] == NULL) {
                LibererTableauGrandsEntiers(tab_extrait, (k-1));
            }
            strcpy_s(tab_extrait[k], (strlen(buffer) + 1), buffer);
            puts(tab_extrait[k]);
            k++;
            j = 0;
            i++;
        }
        buffer[j] = Origine[i];
        i++;
        j++;
    }
    
    return tab_extrait;
}
//-------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------
char* Division_partie_entiere(char* dividende, char* diviseur) {

    //-----------------------gestion des signes
    int signe_moins = 0;
    if (diviseur[0] != dividende[0])
        signe_moins = 1;
    
    int trackeur_de_signe_1 = 0;
    if (diviseur[0] == '-') {
        ChangerSigneGrandEntier(diviseur);
        trackeur_de_signe_1 = 1;
    }

    int trackeur_de_signe_2 = 0;
    if (dividende[0] == '-') {
        ChangerSigneGrandEntier(dividende);
        trackeur_de_signe_2 = 1;
    }

    //-----------------------création des variables necessaire à la boucle
    char* compteur_temp;
    char* compteur = InitialiserGrandEntier(0);
    if (compteur == NULL)
        return NULL;
    
    if (ComparerGrandsEntiers(compteur, diviseur) == 0) {
        char* infini;
        puts("la division par 0 est impossible. Un resultat approche est affiche");
        if (trackeur_de_signe_2)
            infini = "-infini";
        else
            infini = "+infini";
        return infini;
    }

    char* increment = "+1";
    char* buffer_diviseur_temp;
    char* buffer_diviseur = (char*) malloc(sizeof(char) * (strlen(diviseur) + 1));
    if (buffer_diviseur == NULL) {
            free (compteur);
            return NULL;
        }
    strcpy_s(buffer_diviseur, (strlen(diviseur) + 1), diviseur);

    char Termes_Modulo[TAILLE_MAX];

    //-----------------------boucle pour calculer la division entiere et le modulo
    while (ComparerGrandsEntiers(buffer_diviseur, dividende) != PLUS_GRAND)
    {
        buffer_diviseur_temp = SommerGrandsEntiers(buffer_diviseur, diviseur);
        if (buffer_diviseur_temp == NULL) {
            free(compteur);
            free(buffer_diviseur);
            return NULL;
        }
        strcpy_s(Termes_Modulo, TAILLE_MAX, buffer_diviseur);
        free(buffer_diviseur);
        buffer_diviseur = buffer_diviseur_temp;

        compteur_temp = SommerGrandsEntiers(compteur, increment);
        if (compteur_temp == NULL) {
            free(compteur);
            free(buffer_diviseur);
            return NULL;
        }
        free(compteur);
        compteur = compteur_temp;
    }

    //-----------------------calcule du modulo
    ChangerSigneGrandEntier(Termes_Modulo);
    char* Modulo = SommerGrandsEntiers(dividende, Termes_Modulo);
    if (Modulo == NULL)
    {
        free(compteur);
        free(buffer_diviseur);
        return NULL;
    }
    puts(Modulo);
    
    //-----------------------calcule de la partie decimal
    int precision = 1;
    char* facteur;
    char* multiplier_par_10 = "+10";
    for (unsigned int i = 0; i < precision; i++)
    {
        facteur = MultiplierGrandsEntiers(Modulo, multiplier_par_10);
        
    }
    


    if (trackeur_de_signe_1)
        ChangerSigneGrandEntier(diviseur);
    
    if (trackeur_de_signe_2)
        ChangerSigneGrandEntier(dividende);

    if (signe_moins)
        ChangerSigneGrandEntier(compteur);

    return compteur;
}
//-------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------
char* Division_partie_decimale(char* dividende, char* diviseur, char* partie_entiere)
{
    char* multiplication = MultiplierGrandsEntiers(diviseur, partie_entiere);
    if (multiplication == NULL)
        return NULL;
    ChangerSigneGrandEntier(multiplication);
    char* buffer_dividende = SommerGrandsEntiers(dividende, multiplication);
    if (buffer_dividende == NULL)
    {
        free(multiplication);
        return NULL;
    }
    char* Nombre10 = (char*)malloc(4 * sizeof(char));
    if (Nombre10 == NULL)
    {
        free(multiplication);
        free(buffer_dividende);
        return NULL;
    }
    Nombre10[0] = '+';
    Nombre10[1] =  '1';
    Nombre10[2] = '0';
    Nombre10[3] = '\0';

    char* buffer_dividende_10 = MultiplierGrandsEntiers(buffer_dividende, Nombre10);
    if (buffer_dividende_10 == NULL)
    {
        free(multiplication);
        free(buffer_dividende);
        free(Nombre10);
        return NULL;
    }

    char* Resultat = Division_partie_entiere(buffer_dividende_10, diviseur);
    if (Resultat == NULL)
    {
        free(multiplication);
        free(buffer_dividende);
        free(Nombre10);
        free(buffer_dividende_10);
        return NULL;
    }

    return Resultat;
}