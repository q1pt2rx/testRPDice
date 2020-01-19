  /*- --- ---	Die - Class
[?]  The basic die class for normal dice
[?]
[?]         -qaptoR volArE
[?]             2019-12-10
[?]
  \*- --- --- --- -*/




	 /*- --- ---	Die
    ;;  
    ;;
     \*- --- --- --- -*/

        class Die {

        private:
        
            int head,
                chest,
                right,
                left,
                back,
                feet;


        public:

      ////  turn dice left (-) or right (+) a maximum of two rotations;
            void vYaw(short);

      ////  roll die forward (+) or backward (-) up to max head value;
            void vPitch(short);

      ////  roll die left (-) or right (+) up to a max head value;
            void vRoll(short);

        };