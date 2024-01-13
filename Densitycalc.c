#include<stdio.h>
float density(){
    float mass;
    printf("Enter Mass: ");
    scanf("%f",&mass);
    float volume;
    printf("Enter volume:");
    scanf("%f",&volume);
    float density = mass/volume;
    return density;
}
float mass(){
    float density;
    printf("Enter density: ");
    scanf("%f",&density);
    float volume;
    printf("Enter volume:");
    scanf("%f",&volume);
    float mass = density*volume;
    return mass;
}
float volume(){
    float mass;
    printf("Enter density: ");
    scanf("%f",&mass);
    float density;
    printf("Enter volume: ");
    scanf("%f",&density);
    float volume = mass / density;
    return volume;
}
int main(){
    int what;
    int done = 1;
    printf("\n 1.Density \n 2.Mass \n 3.Volume \n What do you wish to Calculate: ");
    scanf("%d",&what);
    while (done == 1)
    {
    if (what == 1)
    {
        int si;
        printf("1.Kg/m³ \n 2.g/cm³ \nChoose a SI units from the above: ");
        scanf("%d",&si);
        if (si == 1)
        {
            printf("And the density equals to: %.2f Kg/m3",density());
        }
        else if (si == 2)
        {
            printf("And the density equals to: %.2f g/m3",density());
        }
        else
        {
            printf("Enter either 1 or 2 \n");
        }   
    }
    else if (what == 2)
    {
        int si;
        printf("\n 1.Kg/m³ \n 2.g/cm³ \nChoose a SI units from the above: ");
        scanf("%d",&si);
        if (si == 1)
        {
            printf("And the mass equals to: %.2f Kg",mass());
        }
        else if (si == 2)
        {
            printf("And the mass equals to: %.2f g",mass());
        }
        else
        {
            printf("Enter either 1 or 2 \n");
        }   
    }
    else if (what == 3)
    {
        int si;
        printf("1.Kg/m³ \n 2.g/cm³ \nChoose a SI units from the above: ");
        scanf("%d",&si);
        if (si == 1)
        {
            printf("And the mass equals to: %.2f m³",volume());
        }
        else if (si == 2)
        {
            printf("And the mass equals to: %.2fcm³ ",volume());
        }
        else
        {
            printf("Enter either 1 or 2 \n");
        }
    }
    else
    {
        printf("Enter either 1 , 2 or 3 \n");
    }
    printf("\nDo you wish to continue (Reply with either 1 on 0) :"); 
    scanf("%d",&done);
    }
    return 0;
}