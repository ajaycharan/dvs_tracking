#ifndef EVENT_H
#define EVENT_H

class Cluster;  //forward declaration of cluster

class Event
{
public:
    Event(double ts = 0, int posX = -1, int posY = -1, int polarityType = -1, bool specialEvent = false);
    ~Event();
    bool isSpecial();

    double timeStamp;
    int x;
    int y;
    int type;
    bool special;
};

#endif // EVENT_H
