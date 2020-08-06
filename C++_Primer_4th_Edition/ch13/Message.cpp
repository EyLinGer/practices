#include "Message.h"
Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    // add this Message to each Folder that points to m
    put_Msg_in_Folders(folders);
}

Message::~Message()
{
    remove_Msg_from_Folders();
}

void Message::put_Msg_in_Folders(const std::set<Folder *> &rhs)
{
    for (std::set<Folder *>::const_iterator beg = rhs.begin();
         beg != rhs.end(); ++beg)
    {
        (*beg)->addMsg(this);
    }
}

Message &Message::operator=(const Message &rhs)
{
    if (&rhs != this)
    {
        remove_Msg_from_Folders();
        contents = rhs.contents; // copy contents from rhs
        folders = rhs.folders;   // copy Folder pointers from rhs
        // add this Message to each Folder in rhs
        put_Msg_in_Folders(rhs.folders);
    }
    return *this;
}

void Message::remove_Msg_from_Folders()
{
    // remove this message from corresponding folders
    for (std::set<Folder *>::const_iterator beg = folders.begin();
         beg != folders.end(); ++beg)
    {
        (*beg)->remMsg(this);
    }
}

void Message::add_Folder(Folder *fldrp)
{
    folders.insert(fldrp);
}

void Message::remove_Folder(Folder *fldrp)
{
    folders.erase(fldrp);
}

void Message::save(Folder &f)
{
    add_Folder(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f)
{
    f.remMsg(this);
    remove_Folder(&f);
}
