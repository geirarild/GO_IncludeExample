#include "GOImport.h"

unsigned long previousMillis = 0;

bool upDateLED(){
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval){
            previousMillis = currentMillis;
            return true;
    }
    else
    {
        return false;
    }   
}//end function
