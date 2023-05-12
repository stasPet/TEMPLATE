#include <iostream>
#include <type_traits>

struct DefaultPolicy_1
{
  operator const char * () const
  {
    return "1";
  }
};

struct DefaultPolicy_2
{
  operator const char * () const
  {
    return "2";
  }
};

struct DefaultPolicy_3
{
  operator const char * () const
  {
    return "3";
  }
};

struct DefaultPolicy_4
{
  operator const char * () const
  {
    return "4";
  }
};

struct DefaultPolicy_5
{
  operator const char * ( ) const
  {
    return "5";
  }
};

struct DefaultPolicies
{
  using P1 = DefaultPolicy_1;
  using P2 = DefaultPolicy_2;
  using P3 = DefaultPolicy_3;
  using P4 = DefaultPolicy_4;
};

struct DefaultPolicyArgs : virtual DefaultPolicies {};

template< typename Base, int D >
struct Discriminator : Base
{
};

template< typename Setter_1, typename Setter_2,
          typename Setter_3, typename Setter_4 >
struct PolicySelector : Discriminator< Setter_1, 1 >,
                        Discriminator< Setter_2, 2 >,
                        Discriminator< Setter_3, 3 >,
                        Discriminator< Setter_4, 4 >
{};

template< typename Policy >
struct Policy_1_is : virtual  DefaultPolicies
{
  using P1 = Policy;
};

template< typename Policy >
struct Policy_2_is : virtual  DefaultPolicies
{
  using P2 = Policy;
};

template< typename Policy >
struct Policy_3_is : virtual  DefaultPolicies
{
  using P3 = Policy;
};

template< typename Policy >
struct Policy_4_is : virtual  DefaultPolicies
{
  using P4 = Policy;
};

template< typename PolicySetter_1 = DefaultPolicyArgs,
          typename PolicySetter_2 = DefaultPolicyArgs,
          typename PolicySetter_3 = DefaultPolicyArgs,
          typename PolicySetter_4 = DefaultPolicyArgs >
struct BreadSlicer
{
  using Policies = PolicySelector< PolicySetter_1, PolicySetter_2,
                                   PolicySetter_3, PolicySetter_4 >;

  void show()
  {
    std::cout << Policies::P1{} << Policies::P2{} << Policies::P3{} << Policies::P4{};
  }
};