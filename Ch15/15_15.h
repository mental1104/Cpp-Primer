#ifndef CP5_EX15_15_DISC_QUOTE_H_
#define CP5_EX15_15_DISC_QUOTE_H_

#include "15_3(Quote).h"
#include <string>

inline namespace EX15 {

    using std::string;

class Disc_quote : public EX03::Quote {
public:
    Disc_quote() = default;
    Disc_quote(string const& b, double p, size_t q, double d) : EX03::Quote(b, p), quantity(q), discount(d){ }
    virtual double net_price(size_t) const = 0;
protected:
    size_t quantity = 0;
    double discount = 0.0;
};

}

#endif // CP5_EX15_15_DISC_QUOTE_H_