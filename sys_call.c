#include <sys/types.h>
#include <unistd.h>

pid_i getpid(void);
pid_i getppid(void);

int main(){
	printf("%d\n", getpid());
	printf("%d\n", getppid());
	return 0;
}
