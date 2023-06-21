#ifndef DEFINE_IF_THEN_ELSE
#define DEFINE_IF_THEN_ELSE

template< bool b, typename T1, typename T2 >
struct IfThenElse
{
  using Type = T1;
};

template< typename T1, typename T2 >
struct IfThenElse< false, T1, T2 >
{
  using Type = T2;
};

#endif // !DEFINE_IF_THEN_ELSE