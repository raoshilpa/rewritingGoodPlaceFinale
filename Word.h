#include <string>

class Word
{
public:
  Word(string word, int initialJoy, int initialAnger, int initialConfusion, int initialMiscellaneous);
  int getJoy();
  int getAnger();
  int getConfusion();
  int getMiscellaneous();
private:
  std::string mWord;
  int mJoyScore[2] = {};
  int mAngerScore[2] = {};
  int mConfusionScore[2] = {};
  int mMiscellaneousScore[2] = {};
}

// TODO: set mJoyScore[0] = <new avg of scores>, mJoyScore[1] = number of ratings