#include "Sentence.h"
#include <string>
using namespace std;

Sentence::Sentence(string sentence, int joyScore, 
           int angerScore, int confusionScore, int miscellaneousScore):
           mSentence(sentence), mJoyScore(joyScore), mAngerScore(angerScore),
           mConfusionScore(confusionScore), mMiscellaneousScore(miscellaneousScore) {};

string Sentence::getSentence()
{
  return mSentence;
}

string* Sentence::getWordArray()
{
  string cpy = mSentence;
  int numWords = 1;
  for(size_t i = 0; i < mSentence.size(); i++)
    if(mSentence[i] == ' ')
      numWords++;

  string* wordArray = new string[numWords];

  int wordNum = 0;

  for(size_t i = 0; i < cpy.size(); i++)
  {
    if(cpy[i] == ' ')
    {
      string s = "";
      for(size_t j = 0; j < i; j++)
      {
         s += cpy[i];
         cpy.erase(0, 1);
      }
      wordArray[wordNum] = s;
      wordNum++;
    }
  }

  return wordArray;
}