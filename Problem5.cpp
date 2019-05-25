#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;


int main(int argc, char * argv[]){

	vector<string> username;
	vector<string> hashtag;
	ifstream ifile;
	string line;
	ifile.open(argv[1]);
	int numTweets = 0;
	while(getline(ifile,line)){
		if(line != ""){
			numTweets++;
		}
		stringstream ss(line);
		string word;
		while(ss >> word){
			if(word.at(0) == '@'){
				word.erase(0,0);
				username.push_back(word);

			}
			if(word.at(0) == '#'){
				word.erase(0,0);
				hashtag.push_back(word);

			}

		}
		
	}
	cout << "1. Number of tweets=" << numTweets << endl;
	cout << "2. Unique users" << endl;
	for(int i = 0; i < username.size();i++){

		cout << username[i] << endl;
	}
	cout << "3. Unique hastags" << endl;
	for(int i = 0; i < hashtag.size();i++){

		cout << hashtag[i] << endl;
	}
	return 0;
}