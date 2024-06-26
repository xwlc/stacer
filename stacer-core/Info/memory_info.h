#ifndef MEMORYINFO_H
#define MEMORYINFO_H

#include "Utils/file_util.h"

#include "stacer-core_global.h"

#define PROC_MEMINFO "/proc/meminfo"

class STACERCORESHARED_EXPORT MemoryInfo
{
public:
    MemoryInfo();

    void updateMemoryInfo();

    quint64 getMemTotal() const;
    quint64 getMemFree() const;
    quint64 getMemUsed() const;

    quint64 getSwapTotal() const;
    quint64 getSwapFree() const;
    quint64 getSwapUsed() const;

private:
    // memory
    quint64 memTotal;
    quint64 memFree;
    quint64 memUsed;
    quint64 buffers;
    quint64 cached;
    quint64 sreclaimable;
    quint64 shmem;

    // swap
    quint64 swapTotal;
    quint64 swapFree;
    quint64 swapUsed;
};

#endif // MEMORYINFO_H
