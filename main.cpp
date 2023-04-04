#include <iostream>
#define NO_OF_CHARS 256 

bool verificare_sir(std::string sir)
{
    int litera[NO_OF_CHARS] = { 0 }; 
    for (int i = 0; sir[i]; i++) 
        litera[sir[i]]++; 

    int impar = 0; 
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (litera[i] & 1)  
            impar++;       
 
        if (impar > 1)
            return false; 
    }

    return true;
}

int main()
{
  std::string sir;
  std::cout <<"Inrodu secventa pentru a o verifica daca este palindrom"<< std::endl;
  std::getline(std::cin, sir);
  verificare_sir(sir) ? 
  std::cout << "Da\n" : std::cout << "Nu\n"; 
    return 0;
}