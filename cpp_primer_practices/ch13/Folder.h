#ifndef __FOLDER_H
#define __FOLDER_H
#include <set>
#include "Message.h"
class Folder
{
private:
    std::set<Message *> msg;
public:
    Folder(std::set<Message *> &m);
    ~Folder();
    void addMsg(Message *m);
    void remMsg(Message *m);
};
#endif