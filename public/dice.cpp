    #include "dice.h"

	 /*- --- ---	Die :: vYaw
  void  turn die left or right for at most 2 rotations
    ()
     \*- --- --- --- -*/

        void Die::vYaw (short num) {
            if (!num) return;
            short turns = num >  2 ? num %2 +1 : 
                          num < -2 ? num %2 -1 :
                          num;
            
        //  turn right for (+)
            if ( turns > 0 ) {
                for (int i= 0; i< turns; i++) {
                    int temp = chest;
                    chest = left;
                    left = back;
                    back = right;
                    right = temp;
                }
        
        //  turn left for (-)
            } else {
                for (int i= 0; i> turns; i--) {
                    int temp = chest;
                    chest = right;
                    right = back;
                    back = left;
                    left = temp;
                }
            }
        }



	 /*- --- ---	Die :: vPitch
  void  roll die forward or backward for at most "head" rotations
    ()
     \*- --- --- --- -*/

        void Die::vPitch (short num) {
            if (!num) return;
            short turns = num >  head ? num %head +1 :
                          num < -head ? num %head -1 :
                          num;

        //  rpll forward for (+);
            if ( turns > 0 ) {
                for (int i= 0; i< turns; i++) {
                    int temp = chest;
                    chest = head;
                    head = back;
                    back = feet;
                    feet = temp;
                }

        //  roll backward for (-);
            } else {
                for (int i= 0; i> turns; i--) {
                    int temp = chest;
                    chest = feet;
                    feet = back;
                    back = head;
                    head = temp;
                }
            }
        }



	 /*- --- ---	Die :: vRoll
  void  roll die left or right for at most "head" rotations
    ()
     \*- --- --- --- -*/

        void Die::vRoll (short num) {
            if (!num) return;
            short turns = num >  head ? num %head +1 :
                          num < -head ? num %head -1 :
                          num;

        //  Roll right for (+)       
            if ( turns > 0 ) {
                for (int i= 0; i< turns; i++) {
                    int temp = head;
                    head = left;
                    left = feet;
                    feet = right;
                    right = temp;
                }

        //  roll left for (-)
            } else {
                for (int i= 0; i> turns; i--) {
                    int temp = head;
                    head = right;
                    right = feet;
                    feet = left;
                    left = temp;
                }
            }
        }