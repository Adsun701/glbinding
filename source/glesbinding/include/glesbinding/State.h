
#pragma once


#include <glesbinding/AbstractState.h>


namespace glesbinding
{


template <typename Binding>
class State : public AbstractState
{
public:
    State() = default;

    virtual void resolve(const char * name) override;
};


} // namespace glesbinding


#include <glesbinding/State.inl>
