#include <iostream>
#include <string>

#include "hash.h"

using namespace std;
//my first line
int main()
{

    hash1 hashObj;
    // hashObj.ajouterItem("Ayoub", "0617006426");
    // hashObj.afficherItem();
    cout << "-----------------------" << endl;
    hashObj.ajouterItem("Lotfi", "0617006426");
    hashObj.afficherItem();
    cout << "-----------------------" << endl;
    hashObj.ajouterItem("Toto", "0617006426");
    hashObj.afficherItem();
    //hashObj.test();
    // hashObj.chercherItem("Ayoub");
    // hashObj.chercherItem("Hamid");

    return 0;
}
