#include <stdio.h>

int main()
{
    float power, phase, pole, volts, f, D; 
    float KVA_Input;
    double Co;
    float ac = 23000;
    float efficiency = 0.85;
    float rpm = 1425;
    float Bav = 0.45;
    float power_factor = 0.88;
    float LT = 1;
    float ns;
    float Kws = 0.955;
    float L;
    
    scanf("%f %f %f %f %f", &power, &phase, &pole, &volts, &f);
   
    KVA_Input = power/(efficiency*power_factor);
    
    ns = (2*f)/pole;
    
    D = ((0.0054*pole)/3.14);
    
    L = (1.18*D);
   
    printf("%.2f", KVA_Input);
    printf("%f", ns);
   
    printf("%f", D);
    printf("%.2f", L);
    
    
    
    
    return 0;
}
