//
// Created by lyd on 2019/6/10 0010.
//

#ifndef FFVIDE1_LOGUTIL_H
#define FFVIDE1_LOGUTIL_H


#include <regex>
#include <string>

class Utils {
public:
    //log打印
    static void logE(const char *tag, const char *msg);

    //拼接字符串
    static int* append(char *str1, char *str2);
};

#endif //FFVIDE1_LOGUTIL_H
