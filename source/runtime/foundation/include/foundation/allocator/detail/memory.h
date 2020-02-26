#pragma once

namespace engine
{
  namespace runtime
  {
    namespace foundation
    {
      namespace allocator
      {
        namespace detail
        {
          template <unsigned long long int TSize = 4096ull>
          class static_memory
          {
          public:
            constexpr unsigned char * data(void) noexcept
            {
              return static_cast<unsigned char *>(_data);
            }

            constexpr const unsigned char * data(void) const noexcept
            {
              return static_cast<unsigned char *>(_data);
            }

            constexpr const unsigned long long int size(void) const noexcept
            {
              return _size;
            }

          private:
            enum
            {
              _size = TSize
            };

            unsigned char _data[_size] = {};
          };

          class dynamic_memory
          {
          public:
            constexpr explicit dynamic_memory(unsigned char * data,
                                              unsigned long long int size)
              : _data(data), _size(size)
            {
            }

            constexpr unsigned char * data(void) noexcept
            {
              return static_cast<unsigned char *>(_data);
            }

            constexpr const unsigned char * data(void) const noexcept
            {
              return static_cast<unsigned char *>(_data);
            }

            constexpr const unsigned long long int size(void) const noexcept
            {
              return static_cast<unsigned long long int>(_size);
            }

          private:
            unsigned char * _data = {};
            unsigned long long int _size = {};
          };
        }
      }
    }
  }
}
