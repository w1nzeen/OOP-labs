#pragma once

struct money {
    int grn;
    int kop;
};

money normalize(const money& a);
money sum(const money& a, const money& b);
money mult(const money& a, int b);
money roundToNationalBank(const money& a);
void to_string(const money& a);
