#ifndef __BULK_ITEM_HPP
#define __BULK_ITEM_HPP

#include "Item_base.hpp"

class Bulk_item : public item_base {
public:
  Bulk_item(const std::string &book = "",
	    double sales_price = 0.0,
	    size_t qty = 0, double disc_rate = 0.0):
    Item_base(book, sales_price),
    min_qty(qty), discount(disc_rate) { }
  double net_price(size_t cnt) const
  {
    if (cnt >= min_qty)
      return cnt * (1 - discount) * price;
    else
      return cnt * price;
  }

private:
  size_t min_qty;
  double discount;
};

#endif
