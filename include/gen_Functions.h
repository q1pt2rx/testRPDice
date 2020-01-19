  /*- --- ---	General Functions - Prototypes
[?]  General functions prototypes for RPDice
[?]
[?]         -qaptoR volArE
[?]             2019-12-11
[?]
  \*- --- --- --- -*/


#ifndef __GEN_FUNCTIONS__
#define __GEN_FUNCTIONS__

        #include <string>

        using namespace std;

        class Game;

//()()  Function Prototypes
        bool bPrintGameText(string);
        bool bGetRepeatGameResp();
        bool bPrintStartMenu();

        Game vNewGameStart();
        Game vLoadGame();

#endif