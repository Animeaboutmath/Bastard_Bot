//########################################################
//#                                                      #
//#                                                      #
//#                  Bastard- Bot V1.1                   #
//#                                                      #
//#                                                      #
//#                                                      #
//########################################################

/*
  This is a recreated version using C++, as the current programming languages supported in
  Visual Studio 2019 excludes Java... Why the fuck lmao
*/
#include <iostream>
#include <string>
using namespace std;

const int insultPromptLength = 3;
const int insultWordPortion = 10;
string insultPrompts[3];
string insultWordBank[insultWordPortion][2];
string userEntry;


void startingPrompt()
{
  cout << "Hello, My name is Bastard Bot, and I am a bastard, \nPrepare for verbal abuse...";
}

//attempting to work on this part
void createInsult(string a[], string b[][2])
{
  int randSegment1 = rand() % insultPromptLength;
  int randSegment2 = rand() % insultWordPortion;
  int randSegment3 = rand() % insultWordPortion;
  string prompt = a[randSegment1];
  string insult1 = b[randSegment2][0];
  string insult2 = b[randSegment3][1];

  cout << ( prompt + insult1 + "-" +insult2);
}

int main()
{



    //this is where the generated sentences are.
    insultPrompts[0] = "Hey, What's wrong with you, you ";
    insultPrompts[1] = "You sorry sack of ";
    insultPrompts[2] = "Boohoo, you little ";

    insultWordBank[0][0] = "fuck";
    insultWordBank[1][0] = "hell";
    insultWordBank[2][0] = "scum";
    insultWordBank[3][0] = "bitch";
    insultWordBank[4][0] = "feral";
    insultWordBank[5][0] = "royal";
    insultWordBank[6][0] = "pussy-ass";
    insultWordBank[7][0] = "ass";
    insultWordBank[8][0] = "boat";
    insultWordBank[9][0] = "grime";

    //second word part
    insultWordBank[0][1] = "boat";
    insultWordBank[1][1] = "fuck";
    insultWordBank[2][1] = "strangler";
    insultWordBank[3][1] = "munch";
    insultWordBank[4][1] = "clown";
    insultWordBank[5][1] = "bandit";
    insultWordBank[6][1] = "mongler";
    insultWordBank[7][1] = "sucker";
    insultWordBank[8][1] = "fool";
    insultWordBank[9][1] = "brained fool";

    startingPrompt();
    cin >> userEntry;
    while (userEntry != "exit")
    {
      createInsult(insultPrompts, insultWordBank);
      cout << "\nWant another one?";

      cin >> userEntry;
    }
}
