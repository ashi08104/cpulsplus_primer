#include <set>
#include "TextQuery.hpp"
#include "NotQuery.hpp"

std::set<TextQuery::line_no>
NotQuery::eval( const TextQuery& file ) const
{
  std::set<TextQuery::line_no> has_val = query.eval( file );
  std::set<line_no> ret_lines;

  for( TextQuery::line_no n = 0; n != file.size(); ++n )
    if ( has_val.find( n ) == has_val.end() )
      ret_lines.insert( n );
  return ret_lines;
}
