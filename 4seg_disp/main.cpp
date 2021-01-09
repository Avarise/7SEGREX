#include "header.h"

using namespace std;
int main(int argc, char *argv[])
{
wiring_setup();
ofstream NodeMCU;
NodeMCU.open("/dev/ttyAMA0");
NodeMCU.close();
float refresh_time = 5;
if(argc<2)
    {printf("No arguments given \n");}
/*if(argc>2)
{
refresh_time = (float)strtod(argc[2],NULL);
}*/
else
{

    if(strlen(argv[1])>3)
    {
        printf("Length of given number: %d \n", strlen(argv[1]));
        while(1)
        {
        char4seg(argv[1][0], 1);
        delay(refresh_time);
        char4seg(argv[1][1], 2);
        delay(refresh_time);
        char4seg(argv[1][2], 3);
        delay(refresh_time);
        char4seg(argv[1][3], 4);
        delay(refresh_time);
        }
    }

}

return 0;
}
