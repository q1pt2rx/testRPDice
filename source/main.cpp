  /*- --- ---	text RPDice
[?]  Test-based implementation of the Roleplay Dice
[?]     game: a proof of concept
[?]
[?]     -qaptoR
[?]         2019-12-09
[?]
  \*- --- --- --- -*/



//####  Preprocessor Directives
    //  Master include
        #include "include_Master.h"

        using namespace std;


	 /*- --- ---    main
   int
    --
     \*- --- --- --- -*/

//----  --- ----
        int main () {
            
            if ( !bPrintGameText("resource\\title.txt") ) return 1;
                //  perhaps write better error to user at a later time


    //////  Main Game Loop
            do {
                
                bPrintGameText("resource\\PLACEHOLDER")
                Game Conquest =  ? 
                  Game_NewGameStart() : Game_LoadGame();
                
            //  FOR TESTING
                cout << "\n\n\t\tNEW GAME!" << endl;

            } while ( bGetRepeatGameResp() );


            return 0;
        }