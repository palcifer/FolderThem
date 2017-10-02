#include <string>
#include <iostream>

#include <sys/stat.h>





int main(int argc, char* argv[])
{
	if (mkdir("/Users/paloulbrich/Desktop/Matej/FolderThem/tmp", 0777))
                           perror("/Users/paloulbrich/Desktop/Matej/FolderThem/tmp");
	return 0;
}