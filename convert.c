#include <stdio.h>
double convert_to_feet(double);
double convert_to_pounds(double);
double convert_to_fahr(double);

int main(void){
    int no_of_conversions,i;
    double number,result;
    char character;
    scanf("%d",&no_of_conversions);
    for(i=0; i<no_of_conversions;i++){
        scanf("%lf %c",&number,&character);
        switch(character){
            case 'm':
            result = convert_to_feet(number);
            printf("%lf %s \n",result,"ft");
            break;
            case 'g':
            result = convert_to_pounds(number);
            printf("%lf %s \n",result,"lbs");
            break;
            case 'c':
            result = convert_to_fahr(number);
            printf("%lf %s \n",result, "f");
            break;
            default:
            break;
        }
        
    }
}

double convert_to_feet(double value){
    double result = value*3.2808;
    return result;
}
double convert_to_pounds(double value){
    double result = value*0.002205;
    return result;
}
double convert_to_fahr(double value){
    double result = (32 + (1.8 * value));
    return result;
}