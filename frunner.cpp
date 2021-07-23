#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<cstdio>
#include<string>
using namespace std;

string sh="g++ ";

int main(int argc,char** args){
	char path[1024];
	getcwd(path,sizeof path);
	freopen((path+string("/makelists.ml")).c_str(),"r",stdin);
	switch(argc){
	case 1:
		make:{
		char filename[1024];
		scanf("filename:%s",filename);
		string buf=filename,buffer;
		for(int i=0;i<4;i++)buf.pop_back();
		sh+=buf+".cpp -o "+buf;
		scanf("opinions:");
		getline(cin,buffer);
		sh+=" "+buffer;
		system(sh.c_str());
		break;
		}
	case 2:
		if(string(args[1])=="-m")goto make;
		else if(string(args[1])=="-e")system("vi makelists.ml");
		break;
	default:
		break;
	}

	return 0;
}
