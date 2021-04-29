#include <string>

class Sentence
{
public:
  Sentence(std::string sentence, int joyScore, 
           int angerScore, int confusionScore, int miscellaneousScore);
  std::string getSentence();
  std::string* getWordArray();
private:
  std::string mSentence;
  int mJoyScore;
  int mAngerScore;
  int mConfusionScore;
  int mMiscellaneousScore;
};