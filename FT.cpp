#include <string>
#include <iostream>
#include <glob.h>
#include <vector>
using std::vector;



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

int main()
{
 	vector<std::string> files = globVector("./*");
 	for (std::vector<std::string>::iterator i = files.begin(); i != files.end(); ++i)
 	{
 		printf("%s\n", i);	
 	}
}
