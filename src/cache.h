#pragma once
#include <optional>
template <typename Key, typename Val>
class Cache {
   public:
    virtual void put(const Key &key, const Value &value) = 0;

    virtual size_t remove(const Key &key) = 0;

    virtual std::optional<Value> get(const Key &key) = 0;

    virtual void evict() = 0;

    virtual bool needEvict() = 0;

    virtual size_t size() = 0;

    virtual ~Cache() = default;
};
