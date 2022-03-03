#include "BMS.h"



int Load_current(int Voc,float Load,int i_t)   //function definition
{
    i_t=Voc/Load;
    return i_t;
}

int Remaining_percentage(int SOCt1,float i_t,int MUn,float Time,int SOCt)
{
    SOCt=SOCt1+(-(i_t/MUn)*Time)*100;
    return SOCt;

}
