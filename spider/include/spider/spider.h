//
// Created by 张志强 on 2019-06-20.
//

#ifndef SPIDER_SPIDER_H
#define SPIDER_SPIDER_H

#include "downloader.h"

#include <vector>

namespace spider {
    struct SpiderOptions {
        std::vector <std::string> urls;
        int interval;
        int parallel;
        int depth;
        int timeout;
    };

    class Spider {
    public:
        virtual void Spider(const SpiderOptions &options) = 0
        virtual void SetDownloader(const Downloader &d) = 0
    };
}

#endif //SPIDER_SPIDER_H