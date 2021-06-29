#include "mouse_data.h"
#include <stdlib.h>


int main()
{
    std::cout << "*********************Bienvenue dans le programme RecoilControl de spaz el hackerino*********************" << std::endl;
    Sleep(3000);
    system("cls");
    std::cout << "Entre la rapidite : ";
    float cursorSpeed = 0.0;
    std::cin >> cursorSpeed;
    system("cls");
    std::cout << "La rapidite du curseur est de : " <<cursorSpeed<< std::endl;
    std::cout << "Pour changer de valeur, appuie sur INSERT et change ta valeur :)" << std::endl;
    std::cout << "Pour quitter le prgramme en sécurite, appuie sur END :(" << std::endl;


    while (true) {



        if (GetAsyncKeyState(VK_LBUTTON))
        {
            mouse_mouvement(0, cursorSpeed); //nombre de pixel dont le curseur doit bouger tous les x secondes
        }

        Sleep(50); //temps entre chaques pas


        if (GetAsyncKeyState(VK_END))
        {
            system("cls");
            std::cout << "Dou tu kite mon progam ta cru tt ki ?" << std::endl;
            Sleep(2500);
            exit(0); //nombre de pixel dont le curseur doit bouger tous les x secondes
        }

        if (GetAsyncKeyState(VK_INSERT))
        {
            int tmp = cursorSpeed;
            std::cout << "Entre la nouvelle valeur : ";
            std::cout << "" << std::endl;
            std::cin >> cursorSpeed;
            system("cls");
            std::cout << "Ancienne valeur : " << tmp << std::endl;
            std::cout << "Nouvelle valeur : " << cursorSpeed << std::endl;
            std::cout << "INSERT : Changer valeur " <<  std::endl;
            std::cout << "END : Quitter" <<  std::endl;
        }
    }
}

