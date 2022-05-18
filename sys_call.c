#include <stdio.h>                                                                                                                    
#include <sys/types.h>                                                                                                                
#include <unistd.h>                                                                                                                   

/**
 * This code gets the PID and PPID
 * for, yk, whatever variable pif_t does
 *
 * return, Always 0
 *
 */

pid_t getpid(void);                                                                                                                   
pid_t getppid(void);                                                                                                                  
                                                                                                                                      
int main()
{                                                                                                                           
                                                                                                                                      
        printf("%d\n", getpid());                                                                                                     
        printf("%d\n", getppid());                                                                                                    
                                                                                                                                      
        return 0;                                                                                                                     
                                                                                                                                      
}                
