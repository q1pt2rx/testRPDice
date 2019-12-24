  /*- --- ---	General Functions - Definitions
[?]  Definitions for the RPDice General functions
[?]
[?]         -qaptoR volArE
[?]             2019-12-11
[?]
  \*- --- --- --- -*/



//####  Preprocessor Directives
    //  Master include
        #include "..\\include_Master.h"

//NMSP  Namespaces
        using namespace std;



	 /*- --- ---	bPrintGameTitle
  bool  Prints the Game Title and welcome message from 
    ()      a file.
    ()
     \*- --- --- --- -*/

        bool bPrintGameTitle () {

        //  open file
            ifstream rTitle;
            rTitle.open("rules\\title.txt");
        
        //  end program if failure
            if ( rTitle.fail() ) {
                cout << "Could not open title file" << endl;
                return false;
            }

        //  print contents of file         
            string s;
            while ( getline(rTitle, s) ) cout << s << endl;

        //  close file and continue program
            rTitle.close();
            return true;
        }

    //- --- --- --- --- --- --- --- --- --- --- --- -//



	 /*- --- ---	bGetRepeatGameResp
  bool  loops getting a valid response  to repeat the program 
    ()      from the user until success.
    ()
     \*- --- --- --- -*/

        bool bGetRepeatGameResp () {
            bool b = true;
            string s;
            char c = 'a';

            cout << "\n\n\t\tYour game has ended, would you like to play again?\n" 
                 << "\t\t\tPlease enter yes/y or no/n" << endl;

            do {

                cout << "\t :|: ";

                if ( getline(cin, s) ) {

                //  blank line was entered
                    if ( (b = (s.size() == 0) ) ) {
                        cout << "\n\t\tYou must enter yes/y or no/n" << endl;
                    } else

                //  first letter is not appropriate response
                    if ( (b = ( c =tolower(s[0]) ) != 'y' && c != 'n') ) {
                        cout << "\n\t\tYou must enter yes/y or no/n" << endl;
                    }
                }
            } while ( b );

            return (c == 'y') ? true : false;
        }
    
    //- --- --- --- --- --- --- --- --- --- --- --- -//


