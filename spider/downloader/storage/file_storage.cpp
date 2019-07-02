//
// Created by 张志强 on 2019-06-24.
//

#include "file_storage.h"

#include <iostream>

namespace spider {
    FileStorage::FileStorage(std::string base_dir) {
        if (base_dir.empty()) {
            throw "path is empty";
        }

    }

    void FileStorage::Write(const std::string &key, const std::string &value) {

    }


    std::string FileStorage::Read(const std::string &key) {
        return "";
    }
}
