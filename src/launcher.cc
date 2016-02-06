#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void signalHandler(int s){
           printf("Caught signal %d\n",s);
exit(0);
}
void registerSignalHandler(){
   struct sigaction sigIntHandler;
   sigIntHandler.sa_handler = signalHandler;
   sigemptyset(&sigIntHandler.sa_mask);
   sigIntHandler.sa_flags = 0;
   sigaction(SIGINT, &sigIntHandler, NULL);
}

int main(int argc,char** argv)
{
registerSignalHandler();
   while(1);
 return 0;    
}

