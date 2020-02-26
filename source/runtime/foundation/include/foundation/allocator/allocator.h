#pragma once

namespace engine
{
  namespace runtime
  {
    namespace foundation
    {
      namespace allocator
      {
        template <class TPool>
        class allocator
        {
        public:
          template <class T>
          constexpr const T * allocate(unsigned long long int n = 1)
          {
            T * p = reinterpret_cast<T*>(_pool.data() + _totalBytes);
            _totalBytes += n * sizeof T;
            return p;
          }

          template <class T>
          constexpr void deallocate(T * p, unsigned long long int n = 1)
          {
            (void)(p);
            _totalBytes -= n * sizeof T;
          }

          constexpr const unsigned long long int total_bytes(void) const
            noexcept
          {
            return _totalBytes;
          }

          constexpr const unsigned long long int available_bytes(void) const
            noexcept
          {
            return _pool.size() - _totalBytes;
          }

        private:
          TPool _pool = {};
          unsigned long long int _totalBytes = {};
        };
      }
    }
  }
}