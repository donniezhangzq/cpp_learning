//
// Created by 张志强 on 2019-06-24.
//

#ifndef SPIDER_FILESTORAGE_H
#define SPIDER_FILESTORAGE_H

#include "spider/storage.h"

namespace spider {
    class FileStorage : public Storage {
    public:
        explicit FileStorage(std::string base_dir);
        void Write(const std::string &key, const std::string &value) override;
        std::string Read(const std::string &key) override;
    };
}

#endif //SPIDER_FILESTORAGE_H
