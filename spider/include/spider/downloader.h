//
// Created by 张志强 on 2019-06-20.
//

#ifndef SPIDER_DOWNLOADER_H
#define SPIDER_DOWNLOADER_H

#include "filter.h"
#include "storage.h"

namespace spider {
    class Downloader {
    public:
        virtual void SetFilter(const Filter &f) = 0;
        virtual void SetStorage(const Storage &s) = 0;
        virtual void Download() = 0;
    }
}

#endif //SPIDER_DOWNLOADER_H

