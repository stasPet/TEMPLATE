#ifndef DEFINE_FUNCTION_PTR
#define DEFINE_FUNCTION_PTR

template< typename Signature >
class FunctionPtr;

template< typename R, typename ... Args >
class FunctionPtr< R ( Args ... ) >
{
  
};

#endif