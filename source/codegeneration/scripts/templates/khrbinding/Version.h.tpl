
#pragma once


#include <string>
#include <set>
#include <utility>

#include <{{binding}}/{{binding}}_api.h>
#include <{{binding}}/{{binding}}_features.h>

#include <{{binding}}/AbstractVersion.h>


namespace {{binding}}
{


/**
*  @brief
*    The Version class represents an OpenGL feature, consisting of majow version and minor version, excluding the profile information.
*
*    This instance can represent both any officially released OpenGL feature and other combinations of major and minar version and provides methods for validity checking and comparison
*
*  Example code:
*  \code{.cpp}
*  const glbinding::Version currentVersion = glbinding::aux::ContextInfo::version();
*
*  if (currentVersion >= glbinding::Version(3, 2))
*  {
*      // do something
*  }
*  \endcode
*/
template <typename Subclass>
class Version : public AbstractVersion
{
public:
    /**
    *  @brief
    *    Constructors inherited from base class.
    */
    using AbstractVersion::AbstractVersion;

    /**
    *  @brief
    *    Copy constructor
    *
    *  @param[in] version
    *    The Version the data is used from
    */
    KHRBINDING_CONSTEXPR inline Version(const Subclass & version);

    /**
    *  @brief
    *    Move constructor
    *
    *  @param[in] version
    *    The Version the data is moved from
    */
    inline Version(Subclass && version);

    /**
    *  @brief
    *    The assignment operator of another Version
    *
    *  @param[in] version
    *    The version the data is used from
    *
    *  @return
    *    The reference to this Version
    */
    inline Subclass & operator=(const Subclass & version);

    /**
    *  @brief
    *    The assignment operator of another Version that is moved from
    *
    *  @param[in] version
    *    The version the data is moved from
    *
    *  @return
    *    The reference to this Version
    */
    inline Subclass & operator=(Subclass && version);

    /**
    *  @brief
    *    Operator for lesser comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser than the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator<(const Subclass & version) const;

    /**
    *  @brief
    *    Operator for greater comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater than the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator>(const Subclass & version) const;

    /**
    *  @brief
    *    Operator for equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is equal to the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator==(const Subclass & version) const;

    /**
    *  @brief
    *    Operator for unequal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is not equal to the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator!=(const Subclass & version) const;

    /**
    *  @brief
    *    Operator for greater equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater or equal than the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator>=(const Subclass & version) const;

    /**
    *  @brief
    *    Operator for lesser equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser or equal than the other Version, else 'false'
    */
    KHRBINDING_CONSTEXPR inline bool operator<=(const Subclass & version) const;
};


} // namespace {{binding}}


#include <{{binding}}/Version.inl>
