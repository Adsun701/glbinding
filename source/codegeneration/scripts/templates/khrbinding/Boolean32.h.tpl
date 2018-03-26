
#pragma once


#include <utility>

#include <{{binding}}/{{binding}}_api.h>
#include <{{binding}}/{{binding}}_features.h>


namespace {{binding}}
{


class KHRBINDING_API Boolean32
{
public:
    using underlying_type = unsigned int;

public:
    KHRBINDING_CONSTEXPR inline Boolean32();
    KHRBINDING_CONSTEXPR inline Boolean32(bool on);
    KHRBINDING_CONSTEXPR inline Boolean32(char on);
    KHRBINDING_CONSTEXPR inline Boolean32(unsigned char on);
    KHRBINDING_CONSTEXPR inline Boolean32(int on);
    KHRBINDING_CONSTEXPR inline Boolean32(unsigned int on);

    KHRBINDING_CONSTEXPR inline explicit operator bool() const;
    KHRBINDING_CONSTEXPR inline explicit operator char() const;
    KHRBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    KHRBINDING_CONSTEXPR inline explicit operator int() const;
    KHRBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean32 & operator=(const Boolean32 & other);
    KHRBINDING_CONSTEXPR inline bool operator<(const Boolean32 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator>(const Boolean32 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator<=(const Boolean32 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator>=(const Boolean32 & other) const;

    KHRBINDING_CONSTEXPR inline bool operator==(const Boolean32 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator!=(const Boolean32 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <{{binding}}/Boolean32.inl>


namespace std
{


template<>
struct hash<{{binding}}::Boolean32>
{
    hash<int>::result_type operator()(const {{binding}}::Boolean32 & boolean) const
    {
        return hash<{{binding}}::Boolean32::underlying_type>()(static_cast<{{binding}}::Boolean32::underlying_type>(boolean));
    }
};


} // namespace std
