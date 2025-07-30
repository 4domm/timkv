
#include <string>
#include <cstring>

#include "slice.h"
#include <cstring>

Slice::Slice() : data_(""), size_(0) {}

Slice::Slice(const char* d, size_t n) : data_(d), size_(n) {}

Slice::Slice(const std::string& s) : data_(s.data()), size_(s.size()) {}

Slice::Slice(const char* s) : data_(s), size_(std::strlen(s)) {}

const char* Slice::data() const { return data_; }

size_t Slice::size() const { return size_; }

bool Slice::empty() const { return size_ == 0; }

char Slice::operator[](size_t n) const { return data_[n]; }

std::string Slice::ToString() const { return std::string(data_, size_); }
