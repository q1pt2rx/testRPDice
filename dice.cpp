        #include <dice.h>

	 /*- --- ---	Die :: vYaw
  void  turn dice left or right for at most 2 rotations
    ()
     \*- --- --- --- -*/

        void Die::vYaw (short num) {
            if (!num) return;
            short turns = num > 2  ? num %2 +1 : 
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
  void
    ()
     \*- --- --- --- -*/

        void Die::vPitch (short num) {
            if (!num) return;
            short turns = num > head  ? num %head +1 :
                          num < -head ? num %head -1 :
                          num;

            if ( turns > 0 ) {
                for (int i= 0; i< turns; i++) {
                    int temp = chest;
                    chest = head;
                    head = back;
                    back = feet;
                    feet = temp;
                }


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