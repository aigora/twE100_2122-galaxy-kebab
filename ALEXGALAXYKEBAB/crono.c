#include <stdio.h>
#include <time.h>
#include "crono.h"
int cronosec(int iniciofin)
{
    static int pre_time;
    if(iniciofin==0) //si llamamos a la funcion con un 0,empieza el cronometro
        pre_time=time(NULL);
    else
        return time(NULL)-pre_time; //si llamamos a la funcion con un nunero distinto a 0,para el tiempo
    return 0;
}
