#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(){

	FILE * lain_ascii_file = fopen("/etc/lain_in_ascii/lain.asc","r");

	if(!lain_ascii_file){
		printf("Lain is missing !!, errno: %s",strerror(errno));
		return errno;
	}

	char line[90]={0};
	while(fgets(line, 90, lain_ascii_file)) {
	  printf("%s", line);
	}

	return 0;
}
