#include <iostream>
using namespace std;
int main()
{
    int nb, inverse = 0;
    cout <<"Bonjour c'est Tantie Ami"<< endl; // Amina
<<<<<<< HEAD
      cout << "entrez un nombre:";
      cin >> nb;
      while (nb !=0)
      {
        int chiffre = nb % 10;
        inverse = inverse * 10 + chiffre;
        nb = nb / 10;
      }
      cout <<"le nombre inverse est:"<<inverse<<endl;
    return 0;
}
