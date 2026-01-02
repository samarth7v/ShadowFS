#include <iostream>
// #include <unistd.h>
void demonprint(int t);
void ravenprint();
int main(){
    
    int i = 0;
    ravenprint();
    while(true){
        demonprint(i);
        std::cout << "\t";
        std::string str;
        std::getline(std::cin, str);
        i++;
    }
}
void ravenprint(){
    std::cout <<("\n>>>\t        __                                ____   ||   ____                                __        ");
    std::cout <<("\n>>>\t   ___ |_ \\__   __   __ _ _____   ___ __ / _  |  ||  |  _ \\ __ ___   _____ _ __   __   __/ _| ___");
    std::cout <<("\n>>>\t  |__ \\ _| \\ \\ / /  / _` / _ \\ \\ / / '_ \\ (_| |  ||  | |_) / _' \\ \\ / / _ \\ `_ \\  \\ \\ / / |_ / __|");
    std::cout <<("\n>>>\t _/ __/|_  |\\ V /  | | | \\__  \\ V /| |_) > _  |  ||  |  _ < (_| |\\ V /  __/ | | |  \\ V /|  _|\\__ \\_");
    std::cout <<("\n>>>\t(_)___(_)|_(_)_/   |_| |_|___/ \\_/ |_.__/_/ |_|  ||  |_| \\_\\__._| \\_/ \\___|_| |_|   \\_(_)_|(_)___(_)\n");
}
void demonprint(int t){
    int j = t%25 +1;
    switch(j){
        case 1:
            std::cout << "                     _______                 >>>";
            break;
        case 2:
            std::cout << "              ,,--''         ''--,,          >>>";
            break;
        case 3:
            std::cout << "           ,-'                     '-,       >>>";
            break;
        case 4:
            std::cout << "          /                           \\      >>>";
            break;
        case 5:
            std::cout << "          |                           |      >>>";
            break;
        case 6:
            std::cout << "          |                           |      >>>";
            break;
        case 7:
            std::cout << "          | |\\                     /| |      >>>";
            break;
        case 8:
            std::cout << "     |\\   | | \\                   / | |   /| >>>";
            break;
        case 9:
            std::cout << "     | \\  | |  '-,             ,-'  | |  / | >>>";
            break;
        case 10:
            std::cout << "     |  '-| |     '-,       ,-'     | |-'  | >>>";
            break;
        case 11:
            std::cout << "     |      |        \\     /        |      | >>>";
            break;
        case 12:
            std::cout << "     |      |    ,-;;/     \\;;-,    |      | >>>";
            break;
        case 13:
            std::cout << "     |  ,'   \\__|;;;/ ,   , \\;;;|__/   ',  | >>>";
            break;
        case 14:
            std::cout << "      \\/              |   |              \\/  >>>";
            break;
        case 15:
            std::cout << "      /             ,-|   |-,             \\  >>>";
            break;
        case 16:
            std::cout << "      ;             \\       /             ;  >>>";
            break;
        case 17:
            std::cout << "       \\             '-, ,-'             /   >>>";
            break;
        case 18:
            std::cout << "        '-,,            '            ,,-'    >>>";
            break;
        case 19:
            std::cout << "            '-,    \\'-,           ,-'        >>>";
            break;
        case 20:
            std::cout << "               ',   \\  ''--,,   ,'           >>>";
            break;
        case 21:
            std::cout << "                 \\   ''--,, /  /             >>>";
            break;
        case 22:
            std::cout << "                 |\\           /|             >>>";
            break;
        case 23:
            std::cout << "                 |(           )|             >>>";
            break;
        case 24:
            std::cout << "                 |'-,       ,-'|             >>>";
            break;
        case 25:
            std::cout << "                     ''-,-''                 >>>";
            break;
    
    }
}