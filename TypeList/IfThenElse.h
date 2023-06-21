#ifndef DEFINE_IF_THEN_ELSE
#define DEFINE_IF_THEN_ELSE

template< bool COND, typename TrueType, typename FalseType >
struct IfThenElse;

template< typename TrueType, typename FalseType >
struct IfThenElse< true, TrueType, FalseType >
{
    using Type = TrueType;
};

template< typename TrueType, typename FalseType >
struct IfThenElse< false, TrueType, FalseType >
{
    using Type = FalseType;
};

#endif // !DEFINE_IF_THEN_ELSE