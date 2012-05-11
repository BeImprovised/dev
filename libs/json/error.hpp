#ifndef _JSON_ERRORS_HPP_
#define _JSON_ERRORS_HPP_
#include <boost/exception/all.hpp>
#include <boost/throw_exception.hpp>

namespace json {
    struct parse_error : public virtual boost::exception, public virtual std::exception
    {
        const char*  what()const throw()    { return "json_parse_error";     }
        virtual void rethrow()const         { BOOST_THROW_EXCEPTION(*this);        }
    };
} // namespace json

#endif 
