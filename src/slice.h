#pragma once

#include <string>
class Slice {
public:
    Slice();
    Slice(const char* data, size_t size);
    Slice(const std::string& s);
    Slice(const char* s);

    const char* data() const;
    size_t size() const;

    bool empty() const;
    char operator[](size_t n) const;
    std::string ToString() const;


private:
    const char* data_;
    size_t size_;
};



