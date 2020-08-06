#include "Folder.h"
Folder::Folder(std::set<Message *> &m)
{
    msg = m;
}

Folder::~Folder()
{
    for (std::set<Message *>::const_iterator beg = msg.begin();
         beg != msg.end(); ++beg)
    {
        (*beg)->remove(*this);
    }
    msg.clear();
}

void Folder::addMsg(Message *m)
{
    m->save(*this);
    msg.insert(m);
}

void Folder::remMsg(Message *m)
{
    msg.erase(m);
    m->remove(*this);
}