#include <iostream>
// #include <unistd.h>
void demonprint(int t);
void ravenprint();
void commandprint(int t);
int main(){
    
    ravenprint();
    int i = 0;
    demonprint(17);
    std::cout << "\t";
    commandprint(1);
    std::cout << "\n";

    while(true){
        demonprint(i);
        std::cout << "\t";
        std::string str;
        std::getline(std::cin, str);
        i++;
    }
}
void commandprint(int t){
    std::cout << "\x1b[33m";
    switch(t){
        case 1: std::cout<<"use command help to view available commands";
    }
    std::cout << "\x1b[0m";

}
void ravenprint(){
    std::cout <<("\n>>>\t  _________.__                .___            ____________________");
    std::cout <<("\n>>>\t /   _____/|  |__ _____     __| _/______  _  _\\_   _____/   _____/");
    std::cout <<("\n>>>\t \\_____  \\ |  |  \\\\__  \\   / __ |/  _ \\ \\/ \\/ /|    __) \\_____  \\ ");
    std::cout <<("\n>>>\t /        \\|   Y  \\/ __ \\_/ /_/ (  <_> )     / |     \\  /        \\");
    std::cout <<("\n>>>\t/_______  /|___|  (____  /\\____ |\\____/ \\/\\_/  \\___  / /_______  /");
    std::cout <<("\n>>>\t        \\/      \\/     \\/      \\/                  \\/          \\/ \n");
}
void demonprint(int t){
    int j = t%19;
    switch(j){
        case 0:
            std::cout << "                                                ";
            break;
        case 1:
            std::cout << "                  _________-----_____                  ";
            break;
        case 2:
            std::cout << "       _____------           __      ----_             ";
            break;
        case 3:
            std::cout << "___----             ___------              \\           ";
            break;
        case 4:
            std::cout << "   ----________        ----                 \\          ";
            break;
        case 5:
            std::cout << "               -----__    |             _____)         ";
            break;
        case 6:
            std::cout << "                    __-                /     \\         ";
            break;
        case 7:
            std::cout << "        _______-----    ___--          \\    /)\\        ";
            break;
        case 8:
            std::cout << "  ------_______      ---____            \\__/  /        ";
            break;
        case 9:
            std::cout << "               -----__    \\ --    _          /\\        ";
            break;
        case 10:
            std::cout << "                      --__--__     \\_____/   \\_/\\      ";
            break;
        case 11:
            std::cout << "                              ----|   /          |     ";
            break;
        case 12:
            std::cout << "                                  |  |___________|     ";
            break;
        case 13:
            std::cout << "                                  |  | ((_(_)| )_)     ";
            break;
        case 14:
            std::cout << "                                  |  \\_((_(_)|/(_)     ";
            break;
        case 15:
            std::cout << "                                  \\             (      ";
            break;
        case 16:
            std::cout << "                                   \\_____________)     ";
            break;
        case 17:
            std::cout << "                                                ";
            break;
        case 18:
            std::cout << "                                                ";
            break;

    
    }
}