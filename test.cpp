#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int tab[2] = {1, 2};
    int n = 1;
    cout << "Apres changement :" << sum(n, n) << endl;
    cout << "Taille du tableau :" << tab << endl;
    return 0;
}