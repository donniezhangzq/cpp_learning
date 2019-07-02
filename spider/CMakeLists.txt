cmake_minimum_required(VERSION 3.13)
project(spider)

SET(CMAKE_BUILE_TYPE DEBUG)
SET(SPIDER_PUBLIC_INCLUDE_DIR include/spider)

set(HEADER_FILES
        include/spider/downloader.h
        include/spider/filter.h
        include/spider/spider.h
        include/spider/storage.h
        )


INCLUDE_DIRECTORIES(
        "${PROJECT_SOURCE_DIR}/include"
        "${PROJECT_SOURCE_DIR}"
)

set(SOURCE
        main.cpp
        downloader/filter/image_filter.cpp
        downloader/filter/image_filter.h
        downloader/storage/file_storage.cpp
        downloader/storage/file_storage.h
        include/spider/downloader.h
        include/spider/filter.h
        include/spider/spider.h
        include/spider/storage.h
        utils/file.cpp
        utils/file.h
        utils/file_test.cpp
        utils/testharness.h
        utils/testharness.cpp
        )

add_executable(spider main.cpp ${SOURCE})
