#ifndef SOAX_UTILITY_H_
#define SOAX_UTILITY_H_

#include <string>
#include "global.h"

namespace soax {

double String2Double(const std::string &s);
unsigned String2Unsigned(const std::string &s);
std::string GetImagePath(const std::string &snake_path);
double Mean(const DataContainer &data);
double StandardDeviation(const DataContainer &data, double mean);
double Median(DataContainer &data);
double Minimum(const DataContainer &data);
double Maximum(const DataContainer &data);

} // namespace soax

#endif // SOAX_UTILITY_H_