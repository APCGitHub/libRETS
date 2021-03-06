/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */
#ifndef LIBRETS_RETS_OBJECT_H
#define LIBRETS_RETS_OBJECT_H
/**
 * @file RetsObject.h
 * (Internal) Contains the RetsObject base class declaration.
 */
/// @cond MAINTAINER
#include <iosfwd>
#include <string>
#include <boost/shared_ptr.hpp>

namespace librets {
/**
 * RetsObject is the base class for libRETS.
 */
class RetsObject
{
  public:
    virtual ~RetsObject();

    virtual std::ostream & Print(std::ostream & outputStream) const;

    std::string ToString() const;

    virtual bool Equals(const RetsObject * object) const;
};

/** Smart pointer to RetsObject. */
typedef boost::shared_ptr<RetsObject> RetsObjectPtr;

std::ostream & operator<<(std::ostream & s, const RetsObject & retsObject);

std::ostream & operator<<(std::ostream & s, RetsObject * retsObject);

bool operator==(const RetsObject & lhs, const RetsObject & rhs);

bool operator!=(const RetsObject & lhs, const RetsObject & rhs);

};
/// @endcond
#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
