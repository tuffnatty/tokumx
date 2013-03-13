#ifndef UTIL_VERSION_HEADER
#define UTIL_VERSION_HEADER

#include <string>

#include "mongo/bson/stringdata.h"

namespace mongo {
    struct BSONArray;

    // mongo version
    extern const char versionString[];
    extern const char tokutekPatchVersionString[];
    extern const BSONArray versionArray;
    std::string fullVersionString();
    std::string mongodVersion();
    int versionCmp(StringData rhs, StringData lhs); // like strcmp

    const char * gitVersion();
    void printGitVersion();

    std::string sysInfo();
    void printSysInfo();

    const char *tokudbVersion();
    void printTokudbVersion();

    void show_warnings();

}  // namespace mongo

#endif  // UTIL_VERSION_HEADER
