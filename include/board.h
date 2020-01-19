  /*- --- ---	Board - Class
[?]  The base class for game boards and
[?]     derivations for each type of 'Plane'.
[?]
[?]         -qaptoR volArE
[?]             2019-12-11
[?]
  \*- --- --- --- -*/



	 /*- --- ---	Board
    ;;
    ;;
     \*- --- --- --- -*/

        class Board {
        //  members
            //  map of colors (2d bool array)
                //  might as well be a 2d array of "cells" each with 
                    //  a color (bool)
                    //  a pointer to a players dice
                    //  a terrain type
            

        //  Methods
            //  printBoard

        };



	 /*- --- ---	Field
 Board
    ;;
     \*- --- --- --- -*/

        class Field : public Board {
            
        };



	 /*- --- ---	Sky
 Board
    ;;
     \*- --- --- --- -*/

        class Sky : public Board {
            
        };



	 /*- --- ---	Under
 Board
    ;;
     \*- --- --- --- -*/

        class Under : public Board {
            
        };



	 /*- --- ---	Phase
 Board
    ;;
     \*- --- --- --- -*/

        class Phase : public Board {
            
        };