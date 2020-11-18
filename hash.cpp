#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;
    for (int i = 0; i < cle.length(); i++)
    {
        hashage = hashage + (int)cle[i];
    }
    index = hashage % tailleTableau;
    return index;
}
void hash1::afficherItem()
{
    for (int i = 0; i < tailleTableau; i++)
    {
        if (HashTable[i]->nom == "vide")
        {
            cout << "la case " << i << " isEmpty" << endl;
        }
        else
        {
            // item *p;
            // p = (item *)malloc(sizeof(item));
            //p = HashTable[i];
            while (HashTable[i]->next != NULL)
            {
                cout << HashTable[i]->nom << "-";
            }
            cout << HashTable[i]->nom << endl;
        }
    }
}
// void hash1::ajouterItem(string nom, string tel)
// {
//     int index = HASH(nom);
//     if (HashTable[index]->nom == "vide")
//     {
//         HashTable[index]->nom = nom;
//         HashTable[index]->tel = tel;
//         HashTable[index]->next = NULL;
//     }
//     else
//     {
//         item *nv_elmnt;
//         nv_elmnt = (item *)malloc(sizeof(item));
//         nv_elmnt->nom = nom;
//         nv_elmnt->tel = tel;
//         nv_elmnt->next = NULL;
//         item *p;
//         p = HashTable[index];
//         while (p->next != NULL)
//         {
//             p = p->next;
//         }
//         p->next = nv_elmnt;
//     }
// }

void hash1::ajouterItem(string nom, string tel)
{
    int index = HASH(nom);
    if (HashTable[index]->nom == "vide")
    {
        HashTable[index]->nom = nom;
        HashTable[index]->tel = tel;
        item *elemntVide;
        elemntVide = (item *)malloc(sizeof(item));
        elemntVide->nom = "vide";
        elemntVide->tel = "vide";
        elemntVide->next = NULL;
        HashTable[index]->next = (item *)malloc(sizeof(item));
        HashTable[index]->next = elemntVide;
    }
    else
    {
        item *nv_elmnt;
        nv_elmnt = (item *)malloc(sizeof(item));
        nv_elmnt->nom = "vide";
        nv_elmnt->tel = "vide";
        nv_elmnt->next = NULL;
        item *p;
        p = HashTable[index];
        while (p->nom != "vide")
        {
            p = p->next;
        }
        p->nom = nom;
        p->tel = tel;
        p->next = nv_elmnt;
    }
}

void hash1::test()
{
    if (HashTable[0]->nom == "vide")
    {
        cout << "hada rah khawi" << endl;
    }
    else
    {
        cout << "hadchi machi howa" << endl;
    }

    HashTable[1]->nom = "ayoub";
    HashTable[1]->tel = "0617006426";

    if (HashTable[1]->nom == "vide")
    {
        cout << "hadchi machi howa" << endl;
    }
    else
    {
        cout << "le nom de cette personne est: " << HashTable[1]->nom << endl;
    }
}

void hash1::chercherItem(string nom)
{
    int index = HASH(nom);
    if (HashTable[index]->nom == "vide")
    {
        cout << nom << " n'existe pas " << endl;
    }
    else
    {
        item *p;
        p = HashTable[index];
        bool EXIST = false;
        while (p->next == NULL)
        {
            if (p->nom == nom)
            {
                //cout << nom << "existe dans la table" << endl;
                EXIST = true;
                break;
            }
        }
        if (EXIST)
        {
            cout << nom << "existe dans la table" << endl;
        }
        else
        {
            cout << nom << " n'existe pas dans le tableau" << endl;
        }
    }
}

hash1::hash1()
{
    for (int i = 0; i < tailleTableau; i++)
    {
        HashTable[i] = new item;
        HashTable[i]->nom = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;
    }
}
