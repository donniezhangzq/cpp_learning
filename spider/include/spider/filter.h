//
// Created by 张志强 on 2019-06-20.
//

#ifndef SPIDER_FILTER_H
#define SPIDER_FILTER_H

#include <iostream>

namespace spider {
    class Filter {
    public:
        virtual void SetPattern(const std::string &p) = 0;
        virtual std::string GetPattern() = 0;
        virtual bool Match(std::string target) = 0;
    };
}

#endif //SPIDER_FILTER_H

