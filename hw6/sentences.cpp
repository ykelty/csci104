#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

void readWords(char* filename, vector<vector<string> >& words);

// client interface
void generateSentences(vector<vector<string> >& words, ofstream& ofile);

// recursive helper function
void genHelper(vector<vector<string> >& words,
	       ofstream& ofile,
	       int currentOption,
	       string sentence,
	       int& numSentences);

int factorial(int n);

void readWords(char* filename,vector<vector<string> >& words)
{
  	string line;
  	ifstream ifile(filename);

	while(getline(ifile, line)){
		vector<string> temp;
		stringstream ss(line);
		string word;
		while(ss>>word){
			temp.push_back(word);
		}
		words.push_back(temp);
	}
}

void generateSentences(vector<vector<string> >& words, ofstream& ofile)
{	
	
	vector<string> subjects;
	subjects = words[1];
	/*
	for(int i = 0; i < subjects.size(); i++){
		ofile <<  "The " << subjects[i] << endl;
	}
	*/
	vector<string> verbs;
	verbs = words[2];
	int numSentences = 0;
	
	//numSentences = factorial(verbs.size());
	genHelper(words, ofile, 0, "The", numSentences);
	ofile << numSentences << " sentences.";

}

void genHelper(vector<vector<string> >& words, 
	ofstream& ofile, int currentOption, 
	string sentence, int& numSentences)
{
	/*
	int permutation;
	for(int i = 0; i < words.size(); i++){
		permutation = permutation * words[i].size();
	}
	if(numSentences >= permutation){
  		return;
  	}
  	*/
	
  	if(currentOption == 0){

  			for(int i = 0; i <= words[currentOption].size(); i++){


  				if(i == words[currentOption].size()){
  					
  					//sentence += "";
  					genHelper(words, ofile, 1, sentence + "", numSentences);

  				}else{

  					//sentence += words[currentOption][i];
  					//sentence += " ";
  					genHelper(words, ofile, 1, sentence + " " + words[currentOption][i], numSentences);
  				}
  				
  			}
  		}
  		if(currentOption == 1){

  			for(int i = 0; i < words[currentOption].size(); i++){

  				//sentence+= words[currentOption][i];
  				//sentence += " ";
  				
  				genHelper(words, ofile, 2, sentence + " " + words[currentOption][i], numSentences);
  			}
  		}
  		if(currentOption == 2){

  			for(int i = 0; i < words[currentOption].size(); i++){
  				
  				//sentence+= words[currentOption][i];
  				//sentence += " ";
  			
  				genHelper(words, ofile, 3, sentence + " " + words[currentOption][i], numSentences);
  			}
  		}
  		if(currentOption == 3){
  			for(int i = 0; i <= words[currentOption].size(); i++){
  				
  				if(i == words[currentOption].size()){
  					sentence += "";
  					ofile << sentence << "." << endl;
  					numSentences++;

  				}else{
  					
  					ofile << sentence << " " << words[currentOption][i] << "." << endl;
  					numSentences++;
  					
  				}
  				
  			}
  		}
  		

  		/*
  		for(int i = 0; i < words[currentOption]; i++){
  			vector<string> temp;
  			ofile << sentence << 
  		}
  		
  		vector<string> subjects = words[1];
  		vector<string> verbs = words[2];
  		
  		for(int i = 0; i < words[1].size(); i++){
  			
  			for(int j = 0; j < words[2].size(); j++){
  				ofile << sentence;
  				ofile << subjects[i] << " " << verbs[j] << endl;

  			}
  		}
  		*/


  }



int factorial(int n){
	if(n > 1)
	{
        return n * factorial(n - 1);
	}
    else
    {
        return 1;
    }
}

int main(int argc, char* argv[])
{
  if(argc < 3){
    cerr << "Usage ./sentences input_file output_file" << endl;
  }
  vector<vector<string> > words;

  // Parse the file
  readWords(argv[1], words);

  // Check the status of parsing
  if(words.size() < 4){
    cerr << "Input file requires 4 lines of words" << endl;
    return 1;
  }

  // Open the output file
  ofstream ofile(argv[2]);
 
  // generate all the sentence options writing them to ofile
  generateSentences(words, ofile);

  ofile.close();

  return 0;
}