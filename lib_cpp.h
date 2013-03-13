//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// 0.0.1
// Alexey Potehin <gnuplanet@gmail.com>, http://www.gnuplanet.ru/doc/cv
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
#ifndef LIB_CPP_H_INCLUDE
#define LIB_CPP_H_INCLUDE
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
namespace lib_cpp
{
// check const char* in set [0-9]
	bool is_uint(const char* str);

// convert const char* to unsigned int
	bool str2uint(const char* str, unsigned int& value, unsigned int default_value);

// pedantic read from descriptor
	size_t pedantic_read(int fd, void *data, size_t size);

// pedantic write to descriptor
	size_t pedantic_write(int fd, const void *data, size_t size);

// read data from exist file
	int file_get(const char *filename, off_t offset, void *pdata, size_t data_size);

// write data to exist file
	int file_set(const char *filename, off_t offset, const void *pdata, size_t data_size);

// convert byte to hex string
	const char* bin2hex(const uint8_t byte, bool flag_up = false);

// convert sibmol to number, example: '0' -> 0, 'F' -> 15
	bool hex2bin(uint8_t source, uint8_t& target);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
#endif
