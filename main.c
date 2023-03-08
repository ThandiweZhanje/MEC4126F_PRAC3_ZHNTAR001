// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>
#include <string.h>


// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|
typedef struct
{
	  uint8_t day;
	  uint8_t month;
	  uint16_t year;
	  uint8_t age;

}age_data; // initialises a struct containing age data




                                               //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)

{
	init_LCD();

	age_data my_age =
	{
	  .day = 6,
	  .month = 5,
	  .year = 2001,
	  .age = 21
	};

	  char str[2];


    while(1)
    {
      uint8_t i;
      uint8_t age_int = my_age.age;
      for (i = 0; i <= age_int; ++i)
        {
         sprintf(str,"%d",i);
	     lcd_putstring(str);
	     delay(65000);
	     lcd_command(CLEAR);
	     delay(65000);
        }

     }


}

// OTHER FUNCTIONS -----------------------------------------------------------|




