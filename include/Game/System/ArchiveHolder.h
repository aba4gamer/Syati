#pragma once

#include "revolution.h"

class JKRArchive;

class ArchiveHolderArchiveEntry {
public:
    ArchiveHolderArchiveEntry(void*, JKRHeap*, const char*);

    ~ArchiveHolderArchiveEntry();

    /* 0x0 */ JKRMemArchive* mArchive;
    /* 0x4 */ JKRHeap* mHeap;
    /* 0x8 */ char* mArchiveName;
};

class ArchiveHolder {
public:
    ArchiveHolder();

    ArchiveHolderArchiveEntry* createAndAdd(void*, JKRHeap*, const char*);

    JKRMemArchive* getArchive(const char*) const;

    void getArchiveAndHeap(const char*, JKRArchive**, JKRHeap**) const;

    void removeIfIsEqualHeap(JKRHeap*);

    ArchiveHolderArchiveEntry* findEntry(const char*) const;

    /* 0x0 */ MR::Vector< MR::AssignableArray< ArchiveHolderArchiveEntry* > > mEntries;
    /* 0xC */ OSMutex mMutex;
};
