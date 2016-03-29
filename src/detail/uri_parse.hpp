// Copyright 2013-2016 Glyn Matthews.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef NETWORK_DETAIL_URI_PARSE_INC
#define NETWORK_DETAIL_URI_PARSE_INC

#include <network/uri/uri.hpp>

namespace network {
namespace detail {
bool parse(uri::string_type& str, uri_parts& parts);
}  // namespace detail
}  // namespace network

#endif  // NETWORK_DETAIL_URI_PARSE_INC
