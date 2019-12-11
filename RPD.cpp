  /*- --- ---	text RPDice
[?]  
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
            
            ifstream rTitle;
            rTitle.open("rules\\title.txt");
            if ( rTitle.fail() ) {
                cout << "Could not open title file" << endl;
                return 1;
            }

            while ( !rTitle.eof() ) {
                string s;
                getline(rTitle, s);
                if ( rTitle.eof() ) break;
                cout << s << endl;
            }

            rTitle.close();

            return 0;
        }