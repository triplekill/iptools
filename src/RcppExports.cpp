// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hostname_to_ip
std::list < std::vector < std::string > > hostname_to_ip(std::vector < std::string > hostnames);
RcppExport SEXP iptools_hostname_to_ip(SEXP hostnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type hostnames(hostnamesSEXP);
    __result = Rcpp::wrap(hostname_to_ip(hostnames));
    return __result;
END_RCPP
}
// ip_to_hostname
std::list < std::vector < std::string > > ip_to_hostname(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_ip_to_hostname(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(ip_to_hostname(ip_addresses));
    return __result;
END_RCPP
}
// ip2long
NumericVector ip2long(CharacterVector ip);
RcppExport SEXP iptools_ip2long(SEXP ipSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type ip(ipSEXP);
    __result = Rcpp::wrap(ip2long(ip));
    return __result;
END_RCPP
}
// long2ip
CharacterVector long2ip(NumericVector ip);
RcppExport SEXP iptools_long2ip(SEXP ipSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ip(ipSEXP);
    __result = Rcpp::wrap(long2ip(ip));
    return __result;
END_RCPP
}
// cidr_range
NumericVector cidr_range(std::string cidr);
RcppExport SEXP iptools_cidr_range(SEXP cidrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type cidr(cidrSEXP);
    __result = Rcpp::wrap(cidr_range(cidr));
    return __result;
END_RCPP
}
// ip_in_cidr
LogicalVector ip_in_cidr(CharacterVector ip, std::string cidr);
RcppExport SEXP iptools_ip_in_cidr(SEXP ipSEXP, SEXP cidrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type ip(ipSEXP);
    Rcpp::traits::input_parameter< std::string >::type cidr(cidrSEXP);
    __result = Rcpp::wrap(ip_in_cidr(ip, cidr));
    return __result;
END_RCPP
}
