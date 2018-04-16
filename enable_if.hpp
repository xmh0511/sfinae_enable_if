//
// Created by dy2018 on 18-4-16.
//

#ifndef ENABLEIF_ENABLE_IF_HPP
#define ENABLEIF_ENABLE_IF_HPP
struct false_type{};
template<bool F,bool T>
struct enable_if
{
    static constexpr false_type value = false_type{};
};
template<bool F>
struct enable_if<F,F>
{
    static const bool value = true;
};

template<bool F,typename Ret=void>
struct if_condition
{
   using type = Ret;
};

#endif //ENABLEIF_ENABLE_IF_HPP
