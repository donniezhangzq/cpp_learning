//
// Created by 张志强 on 2019-06-20.
//

#include "image_filter.h"

#include <iostream>
#include <regex>

namespace spider {
    ImageFilter::ImageFilter() {
        pattern_ = "\\.(png|jpg|jpeg|gif)$";
    }

    void ImageFilter::SetPattern(const std::string &pattern) {
        pattern_ = pattern;
    }

    std::string ImageFilter::GetPattern() {
        return pattern_;
    }

    bool ImageFilter::Match(std::string target) {
        std::regex img_pattern(pattern_);
        return std::regex_match(target, img_pattern);
    }
}