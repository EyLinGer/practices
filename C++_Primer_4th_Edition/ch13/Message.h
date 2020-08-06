#ifndef __MESSAGE_H
#define __MESSAGE_H
#include <string>
#include <set>
#include "Folder.h"
class Message
{
private:
    std::string contents;
    std::set<Folder *> folders;
    void put_Msg_in_Folders(const std::set<Folder *> &rhs);
    void remove_Msg_from_Folders();
    void add_Folder(Folder *fldrp);
    void remove_Folder(Folder *fldrp);

public:
    Message(const Message &m);
    Message &operator=(const Message &rhs);
    ~Message();
    void save(Folder &f);
    void remove(Folder &f);
};

#endif