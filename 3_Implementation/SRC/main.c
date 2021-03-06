/**
 * @file main.c
 * @author AjayBagodi(you@domain.com)
 * @brief main function to get the result
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
int main()
{
    double inte;
    double isoc,fsoc=0;
    double a,b,h,sum=0,integral,e;
    int n,o;
    printf("Enter the lower limit a:");
    scanf("%1f",&a);
    printf("\nEnter the upper limit b:");
    scanf("%1f",&b);
    printf("\nEnter the number of sub intervals n:");
    scanf("%d",&n);
    h=(b-a)/n;
    for(o=0;o<=n;o++)
    {
        e=a+o*h;
        sum=sum+i(e);
    }
    integral = h/3.0*(i(a)+2*sum+4*(i(a)+i(b))+i(b));
    printf("\nThe value of integration is :%1f",integral);


    int ch;
    st*s=(st*)malloc(sizeof(st));
    createEmptyStack(s);


    int Voc,MUn,SOCt,SOCt1,Soc_t;
    float Load,Time,i_t;


    printf("Enter the Battery capacity in ampere/hour(Ah)\n");
    scanf("%d",&MUn);
    push(s,MUn);


    printf("Enter the Initial voltage of the battery in percentage(%)\n");
    scanf("%d",&SOCt1);
    push(s,SOCt1);

    printf("Enter the Time after you want to know the\n status of the battery in hours(h)\n");
    scanf("%f",&Time);
    push(s,Time);

    printf("Enter the Output Voltage of Battery in Volts(V)\n");
    scanf("%d",&Voc);
    push(s,Voc);

    printf("Enter the Load you are supplying in ohms(ohm)\n");
    scanf("%f",&Load);
    push(s,Load);
    if(Soc_t<30)
    {
        printf("Battery saver on\n");
    }
    i_t=Load_current(Voc,Load,i_t);
    SOCt=Remaining_percentage(SOCt1,i_t,MUn,Time,SOCt);
    printf("The remaining percentage of the battery\n after %0.2f Hours(h) is %d%%",Time,SOCt);
    inte=integral*10000/MUn;
    fsoc=(SOCt+inte);
    printf("\nThe final value of SOC is %1f",fsoc);
    return 0;
}
