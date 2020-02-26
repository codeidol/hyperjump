
#include <allocator/allocator.h>
#include <allocator/detail/memory.h>

using engine::runtime::foundation::allocator::allocator;
using engine::runtime::foundation::allocator::detail::dynamic_memory;
using engine::runtime::foundation::allocator::detail::static_memory;

class object
{
  const char * _s;
  int _n;
  char pad[4] = {};

public:
  constexpr object(const char * s, int n) : _s(s), _n(n) {}
};

int main()
{
  allocator<static_memory<>> alloc;
  auto p = alloc.allocate<object>();
  alloc.total_bytes();
  alloc.available_bytes();
  alloc.deallocate(p);
  return 0;
}