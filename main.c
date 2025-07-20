/* Author : null-gman
 * Note : Read the Documintaion before change the code it may helps you out .
 * App : lain_in_ascii
 * Descripthion : A CLI program that echo the Lain character as ASCII art for GNU/Linux systems.
 *
 * Fun Fact: Use the "cat" utility rather than this nonsense.
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h> // For stat() and S_ISDIR

int is_directory(const char *path) {
    	struct stat statbuf;
    	if (stat(path, &statbuf) != 0)
        	return 2;
    	return S_ISDIR(statbuf.st_mode);
}

int getThenPrintAscii (const char * asciiArtFile)
{
    	int is_directory_rc = is_directory(asciiArtFile);
    	if( is_directory_rc == 1 ){
        	printf("ascii_path is Directory !");
        	return 1;
    	}else if(is_directory_rc == 2){
	        printf("error has occurred while trying geting path stat !");
        	return 1;
    	}

	FILE * lain_ascii_file = fopen(asciiArtFile,"r");
	if(!lain_ascii_file){
		printf("Lain is missing !!, errno: %s",strerror(errno));
		return errno;
	}

	char line[90]={0};
	while(fgets(line, 90, lain_ascii_file)) {
	  printf("%s", line);
	}
  	printf("\n");

	return 0;
}

int main(int argc, char *argv[])
{
    	const char defultAsciiPath[] = "/etc/lain_in_ascii/lain.asc";

    	for(int iter = 0 ; iter < argc ; iter++)
    	{
        	if(strncmp(argv[iter],"-ascii_path", 12) == 0 && iter < argc - 1 ){
            		return getThenPrintAscii(argv[iter+1]);
            		break;
        	}
    	}

    	getThenPrintAscii(defultAsciiPath);
    	return 0;
}
