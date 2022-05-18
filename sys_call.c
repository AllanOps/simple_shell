#include <stdio.h>                                                                                                                    
#include <sys/types.h>                                                                                                                
#include <unistd.h>                                                                                                                   
                                                                                                                                      
pid_t getpid(void);                                                                                                                   
pid_t getppid(void);                                                                                                                  
                                                                                                                                      
int main(){                                                                                                                           
                                                                                                                                      
        printf("%d\n", getpid());                                                                                                     
        printf("%d\n", getppid());                                                                                                    
                                                                                                                                      
        return 0;                                                                                                                     
                                                                                                                                      
}                
