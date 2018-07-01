// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_wkt_area
Rcpp::NumericVector rcpp_wkt_area(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_area(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_area(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_buffer_cartesian
Rcpp::StringVector rcpp_wkt_buffer_cartesian(Rcpp::List wkt, double distance, int points_per_circle);
RcppExport SEXP _boostgeometry_rcpp_wkt_buffer_cartesian(SEXP wktSEXP, SEXP distanceSEXP, SEXP points_per_circleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< int >::type points_per_circle(points_per_circleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_buffer_cartesian(wkt, distance, points_per_circle));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_centroid
Rcpp::StringVector rcpp_wkt_centroid(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_centroid(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_centroid(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_clear
Rcpp::StringVector rcpp_wkt_clear(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_clear(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_clear(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_comparable_distance_cartesian
Rcpp::NumericVector rcpp_wkt_comparable_distance_cartesian(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_comparable_distance_cartesian(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_comparable_distance_cartesian(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_comparable_distance_spherical
Rcpp::NumericVector rcpp_wkt_comparable_distance_spherical(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_comparable_distance_spherical(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_comparable_distance_spherical(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_comparable_distance_geographic
Rcpp::NumericVector rcpp_wkt_comparable_distance_geographic(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_comparable_distance_geographic(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_comparable_distance_geographic(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_convex_hull_cartesian
Rcpp::StringVector rcpp_wkt_convex_hull_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_convex_hull_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_convex_hull_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_correct
Rcpp::StringVector rcpp_wkt_correct(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_correct(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_correct(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_crosses_cartesian
Rcpp::LogicalMatrix rcpp_wkt_crosses_cartesian(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_crosses_cartesian(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_crosses_cartesian(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_crosses_spherical
Rcpp::LogicalMatrix rcpp_wkt_crosses_spherical(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_crosses_spherical(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_crosses_spherical(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_crosses_geographic
Rcpp::LogicalMatrix rcpp_wkt_crosses_geographic(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_crosses_geographic(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_crosses_geographic(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_densify_cartesian
Rcpp::StringVector rcpp_wkt_densify_cartesian(Rcpp::List wkt, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_densify_cartesian(SEXP wktSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_densify_cartesian(wkt, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_densify_spherical
Rcpp::StringVector rcpp_wkt_densify_spherical(Rcpp::List wkt, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_densify_spherical(SEXP wktSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_densify_spherical(wkt, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_densify_geographic
Rcpp::StringVector rcpp_wkt_densify_geographic(Rcpp::List wkt, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_densify_geographic(SEXP wktSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_densify_geographic(wkt, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_difference
Rcpp::StringVector rcpp_wkt_difference(Rcpp::List wktOne, Rcpp::List wktTwo, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_difference(SEXP wktOneSEXP, SEXP wktTwoSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_difference(wktOne, wktTwo, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_disjoint_cartesian
Rcpp::LogicalMatrix rcpp_wkt_disjoint_cartesian(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_disjoint_cartesian(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_disjoint_cartesian(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_disjoint_spherical
Rcpp::LogicalMatrix rcpp_wkt_disjoint_spherical(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_disjoint_spherical(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_disjoint_spherical(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_disjoint_geographic
Rcpp::LogicalMatrix rcpp_wkt_disjoint_geographic(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_disjoint_geographic(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_disjoint_geographic(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_distance_test
Rcpp::NumericMatrix rcpp_distance_test(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_distance_test(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_distance_test(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_distance_cartesian
Rcpp::NumericMatrix rcpp_wkt_distance_cartesian(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_distance_cartesian(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_distance_cartesian(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_distance_spherical
Rcpp::NumericMatrix rcpp_wkt_distance_spherical(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_distance_spherical(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_distance_spherical(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_distance_geographic
Rcpp::NumericMatrix rcpp_wkt_distance_geographic(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_distance_geographic(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_distance_geographic(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_cartesian
Rcpp::StringVector rcpp_wkt_envelope_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_spherical
Rcpp::StringVector rcpp_wkt_envelope_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_envelope_geographic
Rcpp::StringVector rcpp_wkt_envelope_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_envelope_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_envelope_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_equals_cartesian
Rcpp::LogicalMatrix rcpp_wkt_equals_cartesian(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_equals_cartesian(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_equals_cartesian(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_intersects_cartesian
Rcpp::LogicalMatrix rcpp_wkt_intersects_cartesian(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_intersects_cartesian(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_intersects_cartesian(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_intersects_spherical
Rcpp::LogicalMatrix rcpp_wkt_intersects_spherical(Rcpp::List wktOne, Rcpp::List wktTwo);
RcppExport SEXP _boostgeometry_rcpp_wkt_intersects_spherical(SEXP wktOneSEXP, SEXP wktTwoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_intersects_spherical(wktOne, wktTwo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_is_empty
Rcpp::NumericVector rcpp_wkt_is_empty(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_is_empty(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_is_empty(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_is_simple
Rcpp::NumericVector rcpp_wkt_is_simple(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_is_simple(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_is_simple(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_is_valid
Rcpp::NumericVector rcpp_wkt_is_valid(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_is_valid(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_is_valid(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_length_cartesian
Rcpp::NumericVector rcpp_wkt_length_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_length_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_length_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_length_spherical
Rcpp::NumericVector rcpp_wkt_length_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_length_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_length_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_length_geographic
Rcpp::NumericVector rcpp_wkt_length_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_length_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_length_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_num_geometries
Rcpp::NumericVector rcpp_wkt_num_geometries(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_num_geometries(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_num_geometries(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_num_interior_rings
Rcpp::NumericVector rcpp_wkt_num_interior_rings(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_num_interior_rings(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_num_interior_rings(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_num_points
Rcpp::NumericVector rcpp_wkt_num_points(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_num_points(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_num_points(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_num_segments
Rcpp::NumericVector rcpp_wkt_num_segments(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_num_segments(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_num_segments(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_cartesian
Rcpp::NumericVector rcpp_wkt_perimeter_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_spherical
Rcpp::NumericVector rcpp_wkt_perimeter_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_perimeter_geographic
Rcpp::NumericVector rcpp_wkt_perimeter_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_perimeter_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_perimeter_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_reverse
Rcpp::StringVector rcpp_wkt_reverse(Rcpp::List wkt, const char* strategy);
RcppExport SEXP _boostgeometry_rcpp_wkt_reverse(SEXP wktSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< const char* >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_reverse(wkt, strategy));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_simplify_cartesian
Rcpp::StringVector rcpp_wkt_simplify_cartesian(Rcpp::List wkt, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_simplify_cartesian(SEXP wktSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_simplify_cartesian(wkt, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_simplify_spherical
Rcpp::StringVector rcpp_wkt_simplify_spherical(Rcpp::List wkt, double distance);
RcppExport SEXP _boostgeometry_rcpp_wkt_simplify_spherical(SEXP wktSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_simplify_spherical(wkt, distance));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_touches_cartesian
Rcpp::LogicalMatrix rcpp_wkt_touches_cartesian(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_touches_cartesian(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_touches_cartesian(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_touches_spherical
Rcpp::LogicalMatrix rcpp_wkt_touches_spherical(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_touches_spherical(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_touches_spherical(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_touches_geographic
Rcpp::LogicalMatrix rcpp_wkt_touches_geographic(Rcpp::List wktFrom, Rcpp::List wktTo);
RcppExport SEXP _boostgeometry_rcpp_wkt_touches_geographic(SEXP wktFromSEXP, SEXP wktToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktFrom(wktFromSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTo(wktToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_touches_geographic(wktFrom, wktTo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_unique_cartesian
Rcpp::StringVector rcpp_wkt_unique_cartesian(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_unique_cartesian(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_unique_cartesian(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_unique_spherical
Rcpp::StringVector rcpp_wkt_unique_spherical(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_unique_spherical(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_unique_spherical(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_unique_geographic
Rcpp::StringVector rcpp_wkt_unique_geographic(Rcpp::List wkt);
RcppExport SEXP _boostgeometry_rcpp_wkt_unique_geographic(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_unique_geographic(wkt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_within_cartesian
Rcpp::LogicalMatrix rcpp_wkt_within_cartesian(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_within_cartesian(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_within_cartesian(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_within_spherical
Rcpp::LogicalMatrix rcpp_wkt_within_spherical(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_within_spherical(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_within_spherical(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_within_geographic
Rcpp::LogicalMatrix rcpp_wkt_within_geographic(Rcpp::List x, Rcpp::List y);
RcppExport SEXP _boostgeometry_rcpp_wkt_within_geographic(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_within_geographic(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_spatial_predicate_cartesian
Rcpp::List rcpp_spatial_predicate_cartesian(Rcpp::List wktOne, Rcpp::List wktTwo, std::string predicate);
RcppExport SEXP _boostgeometry_rcpp_spatial_predicate_cartesian(SEXP wktOneSEXP, SEXP wktTwoSEXP, SEXP predicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    Rcpp::traits::input_parameter< std::string >::type predicate(predicateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_spatial_predicate_cartesian(wktOne, wktTwo, predicate));
    return rcpp_result_gen;
END_RCPP
}
// rtree_within
void rtree_within();
RcppExport SEXP _boostgeometry_rtree_within() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rtree_within();
    return R_NilValue;
END_RCPP
}
// rcpp_bg_join_predicate_cartesian
Rcpp::List rcpp_bg_join_predicate_cartesian(Rcpp::List wktOne, Rcpp::List wktTwo, std::string predicate);
RcppExport SEXP _boostgeometry_rcpp_bg_join_predicate_cartesian(SEXP wktOneSEXP, SEXP wktTwoSEXP, SEXP predicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wktOne(wktOneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type wktTwo(wktTwoSEXP);
    Rcpp::traits::input_parameter< std::string >::type predicate(predicateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_bg_join_predicate_cartesian(wktOne, wktTwo, predicate));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_boostgeometry_rcpp_wkt_area", (DL_FUNC) &_boostgeometry_rcpp_wkt_area, 2},
    {"_boostgeometry_rcpp_wkt_buffer_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_buffer_cartesian, 3},
    {"_boostgeometry_rcpp_wkt_centroid", (DL_FUNC) &_boostgeometry_rcpp_wkt_centroid, 1},
    {"_boostgeometry_rcpp_wkt_clear", (DL_FUNC) &_boostgeometry_rcpp_wkt_clear, 1},
    {"_boostgeometry_rcpp_wkt_comparable_distance_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_comparable_distance_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_comparable_distance_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_comparable_distance_spherical, 2},
    {"_boostgeometry_rcpp_wkt_comparable_distance_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_comparable_distance_geographic, 2},
    {"_boostgeometry_rcpp_wkt_convex_hull_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_convex_hull_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_correct", (DL_FUNC) &_boostgeometry_rcpp_wkt_correct, 2},
    {"_boostgeometry_rcpp_wkt_crosses_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_crosses_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_crosses_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_crosses_spherical, 2},
    {"_boostgeometry_rcpp_wkt_crosses_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_crosses_geographic, 2},
    {"_boostgeometry_rcpp_wkt_densify_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_densify_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_densify_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_densify_spherical, 2},
    {"_boostgeometry_rcpp_wkt_densify_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_densify_geographic, 2},
    {"_boostgeometry_rcpp_wkt_difference", (DL_FUNC) &_boostgeometry_rcpp_wkt_difference, 3},
    {"_boostgeometry_rcpp_wkt_disjoint_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_disjoint_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_disjoint_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_disjoint_spherical, 2},
    {"_boostgeometry_rcpp_wkt_disjoint_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_disjoint_geographic, 2},
    {"_boostgeometry_rcpp_distance_test", (DL_FUNC) &_boostgeometry_rcpp_distance_test, 2},
    {"_boostgeometry_rcpp_wkt_distance_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_distance_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_distance_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_distance_spherical, 2},
    {"_boostgeometry_rcpp_wkt_distance_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_distance_geographic, 2},
    {"_boostgeometry_rcpp_wkt_envelope_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_envelope_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_spherical, 1},
    {"_boostgeometry_rcpp_wkt_envelope_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_envelope_geographic, 1},
    {"_boostgeometry_rcpp_wkt_equals_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_equals_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_intersects_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_intersects_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_intersects_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_intersects_spherical, 2},
    {"_boostgeometry_rcpp_wkt_is_empty", (DL_FUNC) &_boostgeometry_rcpp_wkt_is_empty, 2},
    {"_boostgeometry_rcpp_wkt_is_simple", (DL_FUNC) &_boostgeometry_rcpp_wkt_is_simple, 2},
    {"_boostgeometry_rcpp_wkt_is_valid", (DL_FUNC) &_boostgeometry_rcpp_wkt_is_valid, 2},
    {"_boostgeometry_rcpp_wkt_length_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_length_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_length_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_length_spherical, 1},
    {"_boostgeometry_rcpp_wkt_length_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_length_geographic, 1},
    {"_boostgeometry_rcpp_wkt_num_geometries", (DL_FUNC) &_boostgeometry_rcpp_wkt_num_geometries, 1},
    {"_boostgeometry_rcpp_wkt_num_interior_rings", (DL_FUNC) &_boostgeometry_rcpp_wkt_num_interior_rings, 1},
    {"_boostgeometry_rcpp_wkt_num_points", (DL_FUNC) &_boostgeometry_rcpp_wkt_num_points, 1},
    {"_boostgeometry_rcpp_wkt_num_segments", (DL_FUNC) &_boostgeometry_rcpp_wkt_num_segments, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_spherical, 1},
    {"_boostgeometry_rcpp_wkt_perimeter_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_perimeter_geographic, 1},
    {"_boostgeometry_rcpp_wkt_reverse", (DL_FUNC) &_boostgeometry_rcpp_wkt_reverse, 2},
    {"_boostgeometry_rcpp_wkt_simplify_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_simplify_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_simplify_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_simplify_spherical, 2},
    {"_boostgeometry_rcpp_wkt_touches_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_touches_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_touches_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_touches_spherical, 2},
    {"_boostgeometry_rcpp_wkt_touches_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_touches_geographic, 2},
    {"_boostgeometry_rcpp_wkt_unique_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_unique_cartesian, 1},
    {"_boostgeometry_rcpp_wkt_unique_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_unique_spherical, 1},
    {"_boostgeometry_rcpp_wkt_unique_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_unique_geographic, 1},
    {"_boostgeometry_rcpp_wkt_within_cartesian", (DL_FUNC) &_boostgeometry_rcpp_wkt_within_cartesian, 2},
    {"_boostgeometry_rcpp_wkt_within_spherical", (DL_FUNC) &_boostgeometry_rcpp_wkt_within_spherical, 2},
    {"_boostgeometry_rcpp_wkt_within_geographic", (DL_FUNC) &_boostgeometry_rcpp_wkt_within_geographic, 2},
    {"_boostgeometry_rcpp_spatial_predicate_cartesian", (DL_FUNC) &_boostgeometry_rcpp_spatial_predicate_cartesian, 3},
    {"_boostgeometry_rtree_within", (DL_FUNC) &_boostgeometry_rtree_within, 0},
    {"_boostgeometry_rcpp_bg_join_predicate_cartesian", (DL_FUNC) &_boostgeometry_rcpp_bg_join_predicate_cartesian, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_boostgeometry(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
