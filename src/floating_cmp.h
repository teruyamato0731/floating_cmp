#ifndef RCT_FLOATING_CMP
#define RCT_FLOATING_CMP

#include <algorithm>
#include <cfloat>
#include <cmath>
#include <limits>
#include <type_traits>

namespace rct {

template<class T, class U, class C = std::common_type_t<T, U>>
int floating_cmp(const T a, const U b) {
  const auto eps = std::numeric_limits<C>::epsilon() * std::max({C{1.0}, C{std::abs(a)}, C{std::abs(b)}});
  if(a > b + eps) {
    return 1;
  } else if(a < b - eps) {
    return -1;
  } else {
    return 0;
  }
}

}  // namespace rct

#endif  // RCT_FLOATING_CMP
