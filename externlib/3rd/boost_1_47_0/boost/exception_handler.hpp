#ifndef BOOST_EXCEPTION_HANDLER_HPP_INCLUDED
#define BOOST_EXCEPTION_HANDLER_HPP_INCLUDED

#include "photo_commlog.h"
using namespace PHOTO;

namespace boost
{
  static void throw_exception(std::exception const & e)
  {
    // Turn the exception into a error message
    
      ERROR_LOG("boost exception: %s", e.what());
  } // user defined
} // namespace boost

#endif // #ifndef BOOST_EXCEPTION_HANDLER_HPP_INCLUDED
