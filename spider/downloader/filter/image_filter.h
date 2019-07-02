//
// Created by 张志强 on 2019-06-20.
//

#ifndef SPIDER_IMAGE_FILTER_H
#define SPIDER_IMAGE_FILTER_H

#include "spider/filter.h"

#include <iostream>

namespace spider {
    class ImageFilter : public Filter {
    public:
        ImageFilter();
        void SetPattern(const std::string &pattern) override;
        std::string  GetPattern() override;
        bool Match(std::string target) override;
    private:
        std::string pattern_;
    };
}

#endif //SPIDER_IMAGE_FILTER_H


