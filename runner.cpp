#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

string filename,shell;

int main(int argc,char** args){
    filename=args[1];
    filename.pop_back();
    filename.pop_back();
    filename.pop_back();
    filename.pop_back();
    shell="g++ "+filename+".cpp -o "+filename+" -std=c++20 -fmodules-ts";
    for(int i=2;i<argc;i++){
        shell+=(string(" -")+(argc>1?args[2]:(char*)""))==" -"?string(""):(string(" -")+(argc>1?args[2]:(char*)""));
    }
    system(shell.c_str());

    return 0;
}