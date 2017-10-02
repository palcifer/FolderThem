#include <string>
#include <iostream>
#include <glob.h> //for folder traspasssing
#include <vector>
#include <sys/stat.h>  //for files manipulation
using std::vector;

std::string currentFolder;


vector<std::string> globVector(const std::string& pattern){
    glob_t glob_result;
    glob(pattern.c_str(),GLOB_TILDE,NULL,&glob_result);
    vector<std::string> files;
    for(unsigned int i=0;i<glob_result.gl_pathc;++i){
        files.push_back(std::string(glob_result.gl_pathv[i]));
    }
    globfree(&glob_result);
    return files;
}

int main(int argc, char* argv[])
{
	currentFolder = "";

	//TODO instert desired folder, drag&drop to GUI
 	vector<std::string> files = globVector("./*");


 	for (std::vector<std::string>::iterator i = files.begin(); i != files.end(); ++i)
 	{
 		std::cout << *i << std::endl;
 		//TODO distinguish raw photo formats
 		if(true){
 			//TODO distinguish photos containing QR codes
 			if(true){
 				//TODO create new directory
 				if (mkdir("/Users/paloulbrich/Desktop/Matej/FolderThem/tmp", 0777))
                           perror("/Users/paloulbrich/Desktop/Matej/FolderThem/tmp");
 			} else {

 				//There was already found a QR code
 				if(currentFolder!=""){
 					//TODO move file into current folder
 				}
 			}

 		}

 		
 	}
}