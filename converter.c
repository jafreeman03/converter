#include <stdio.h>

int main() {

    int userInput; //varibale for integers
    char conversionInput; //variables for characters
    float conversionFlt; //varaibles for float

    //user decides which units they want to convert
    while (userInput != 5) {
        while (userInput != 1 || userInput != 2 || userInput != 3 || userInput != 4 || userInput != 5) { 
            printf("what do you want to do?\n1: convert between Kilograms and Pounds\n2: convert between Hectares and Acres\n3: convert between Litres and Gallons\n4: convert between Kilometre and Mile\n5: Quit ");
            scanf("%d", &userInput);

            //user's selection
            if (userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4 || userInput == 5) {
                break;
            } else {
                printf("Not a valid choice. Try again.\n\n");
            }
        }

        //convert between Kilograms and Pounds
        if (userInput == 1) {
            while(conversionInput != 'K' || conversionInput != 'P') {
                printf("Enter K for kilograms or P for pounds:"); //the user makes a decision to convert kilograms or pounds
                scanf(" %c" , &conversionInput);
                if(conversionInput == 'K') {
                printf("Enter your value in kilograms: "); //the user has chosen to convert to pounds
                scanf(" %f", &conversionFlt);
                printf("Your value in pounds is: %.2f kilograms == %.2f pounds ", conversionFlt, conversionFlt*2.20462);
                break;
                } else if(conversionInput == 'P') {
                printf("Enter your value in pounds:"); //the user has chosen to convert to kilograms
                scanf(" %f" , &conversionFlt);
                printf("Your value to kilograms is: %.2f pounds == %.2f kilograms ", conversionFlt, conversionFlt*0.45359);
                break;
                } else {
                printf("Try again"); //the user needs to try again
                }
            }
        }

        //convert between Hectares and Acres
        if (userInput == 2) {
            while(conversionInput != 'H' || conversionInput != 'A') {
            
                printf("Enter H for hectares or A for acres:"); //the user makes a decision to convert hectares or acres
                scanf(" %c" , &conversionInput);
                if(conversionInput == 'H') {
                printf("Enter your value in hectares: "); //the user has chosen to convert tp acres
                scanf(" %f", &conversionFlt);
                printf("Your conversion to acres is: %.2f hectares == %.2f acres ", conversionFlt, conversionFlt*2.47105);
                break;
                } else if(conversionInput == 'A') {
                printf("Enter your value in acres: "); //the user has chosen to convert to hectares
                scanf(" %f" , &conversionFlt);
                printf("Your conversion to hectares is: %.2f acres == %.2f hectares ", conversionFlt, conversionFlt*0.4050);
                break;
                } else {
                printf("Try again"); //the user needs to try again
                }
            }
        }

        //convert between Litres and Gallons
        if (userInput == 3) {
            while(conversionInput != 'L' || conversionInput != 'G') {
            
                printf("Enter L for litres or G for gallons:"); //the user makes a decision to convert to gallons or litres
                scanf(" %c" , &conversionInput);
                if(conversionInput == 'L') {
                printf("Enter your value in litres: "); //the user has chosen to convert to gallons
                scanf(" %f", &conversionFlt);
                printf("Your conversion to gallons is: %.2f Litres == %.2f Gallons ", conversionFlt, conversionFlt*0.264172);
                break;
                } else if(conversionInput == 'G') {
                printf("Enter your value in gallons: "); //the user has chosen to convert to litres
                scanf(" %f" , &conversionFlt);
                printf("Your conversion to litres is: %.2f Gallons == %.2f Litres ", conversionFlt, conversionFlt*3.7850);
                } else {
                printf("Try again"); //the user needs to try again
                }
            }
        }

        //convert between Kilometre and Mile
        if (userInput == 4) {
            while(conversionInput != 'K' || conversionInput != 'M') {
            
                printf("Enter K for kilometres or M for miles:"); //the user makes a decision to convert to kilometres or miles
                scanf(" %c" , &conversionInput);
                if(conversionInput == 'K') {
                printf("Enter a value in kilometres: "); //the user has chosen to convert to miles
                scanf(" %f" , &conversionFlt);
                printf("Your conversion to miles is: %.2f kilometres == %.2f miles ", conversionFlt, conversionFlt*0.621371);
                break;
                } else if(conversionInput == 'M') {
                printf("Enter a value in miles: "); //the user has chosen to convert to kilometres 
                scanf(" %f" , &conversionFlt);
                printf("Your conversion to kilometres is: %.2f miles == %.2f kilometres ", conversionFlt, conversionFlt*1.6090);
                break;
                } else {
                printf("Try again"); //the user needs to try again
                }
            }
        }
    }


    return 0;
}

        


