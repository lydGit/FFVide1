//
// Created by lyd on 2019/6/10 0010.
//

#include "Utils.h"
#include <android/log.h>

void Utils::logE(const char *tag, const char *msg) {
    __android_log_print(ANDROID_LOG_ERROR, tag, msg,NULL);
}

void Utils::append( char *str1,  char *str2) {
    char *result = malloc(strlen(str1)+strlen(str2)+1);//+1 for the zero-terminator
    //in real code you would check for errors in malloc here
    if (result == NULL) exit (1);

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

