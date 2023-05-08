#ifndef DEFINE_TUPLE
#define DEFINE_TUPLE

template< typename ... Types >
class Tuple;

template< typename Head, typename ... Tail >
class Tuple< Head, Tail ... >
{
private:
  Head head;
  Tuple< Tail ... > tail;

public:
  Tuple() = default;
  Tuple( Head h, Tail ... t ) : head{ h }, tail{ t ... } {}

  Head & getHead()
  {
    return head;
  }

  Tuple< Tail ... > & getTail()
  {
    return tail;
  }

  Head const & getHead() const
  {
    return head;
  }

  Tuple< Tail ... > const & getTail() const
  {
    return tail;
  }
};

template<>
class Tuple<> {};

#endif 