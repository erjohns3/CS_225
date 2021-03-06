#ifndef CS225_DYNAMIC_ARRAY_H_
#define CS225_DYNAMIC_ARRAY_H_
#include <cstdint>

namespace cs225
{
	template <class T>
	class dynamic_array
	{
		public:
	
			dynamic_array();
	
			dynamic_array(uint64_t sze);
	
			dynamic_array(const dynamic_array &other);
	
			dynamic_array(dynamic_array &&other);
	
			dynamic_array& operator=(dynamic_array rhs);
	
			~dynamic_array();
	
			void clear();
	
			void swap(dynamic_array &other);
	
			void resize(uint64_t size);
	
			const T& operator[](uint64_t idx) const;
	
			T& operator[](uint64_t idx);
	
			const T& at(uint64_t idx) const;
	
			T& at(uint64_t idx);
	
			uint64_t size() const;
	
			bool empty() const;

		private:
	
			T* arr_;
			uint64_t size_;
	};
}
#include "dynamic_array.tcc"

#endif
