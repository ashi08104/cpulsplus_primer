#include <string>
using std::string;

template <typename T>
int compare( const T &v1, const T &v2 )
{
  if( v1 < v2 )
      return -1;
      
      if( v2 < v1 )
	return 1;
      return 0;
      
}
  
  int main( void )
  {
    string s1("hi"), s2("world");
    return compare(s1, s2);
  }
