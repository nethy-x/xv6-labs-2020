#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
  
  if(argc < 2){
 	fprintf(2,"error: sleep time is not specified");
 
 	}
  int sleep_sec=atoi(argv[1]);
  sleep(sleep_sec);
  exit(1);
}
