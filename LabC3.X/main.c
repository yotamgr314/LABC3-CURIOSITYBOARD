/*******************************************************************************
Copyright 2016 Microchip Technology Inc. (www.microchip.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#include <stdint.h>
#include "xc.h"

//------------------------------------------------------------------------------
//Main Function
//------------------------------------------------------------------------------
int main(void)
{
    int count=0, potentio;
    
    //Initialize LED/Switch IO Direction (TRISx)
    

    //Set RB12 and ANSB as Analog Input


    //Initialize A/D Circuit (AD1CON1)


    //Select channel AN8 for A/D conversion


    //Main loop
    while(1)
    {
        //Count presses on S1 in variable count (Light up LED1 each time S1 pressed)

        //Perform A/D Conversion

        //Put Result in variable pot
        potentio /*= ???*/ ;
    }
}
