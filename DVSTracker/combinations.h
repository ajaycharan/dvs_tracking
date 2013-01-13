#ifndef COMBINATIONS_H
#define COMBINATIONS_H

#include "combinationchoice.h"

class Combinations
{
public:
    Combinations(int maxNumCombinations, int numTracks);
    ~Combinations();
    void add(CombinationChoice *c);
    CombinationChoice* get(int i);
    float getWorstScore();
    int size();
    void reset();

private:
    CombinationChoice **combinations;
    int length;
    float worstScore;
    int insertIndex;

};

#endif // COMBINATIONS_H
