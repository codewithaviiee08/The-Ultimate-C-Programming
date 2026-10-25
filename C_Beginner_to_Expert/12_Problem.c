# include <stdio.h>

int main(){

    // Conditional statements

    // if
    // if else
    // if else if
    // switch case

    int day=1;

    if(day==1){
        printf("\nMonday");
    }
    else if(day==2){
        printf("\nTuesday");
    }
    
    else if(day==3){
        printf("\nWednesday");
    }
    else if(day==4){
        printf("\nThursday");
    }
    else if(day==5){
        printf("\nFriday");
    }
    else if(day==6){
        printf("\nSaturday");
    }
    else if(day==7){
        printf("\nSunday");
    }
    else{
        printf("\nNot Known Day");
    }

    switch(day){
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nNot Known Day");
    }

    return 0;
}
