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
        #include "public\include_Master.h"


//NMSP  namespaces
        using namespace std;



	 /*- --- ---    main
   int
    --
     \*- --- --- --- -*/

//----  --- ----
        int main () {
            
            if ( !bPrintGameTitle() ) return 1;
                //  perhaps write better error to user at a later time


    //////  Main Game Loop
             do {
                 
                 cout << "\n\n\t\tNEW GAME!" << endl;

             } while ( bGetRepeatGameResp() );


            return 0;
        }