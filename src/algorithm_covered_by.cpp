/*
#include "R_boostgeometry_disjoint.h"
#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
Rcpp::LogicalMatrix rcpp_wkt_covered_by_cartesian( Rcpp::List wktOne, Rcpp::List wktTwo ) {
  Rcpp::LogicalMatrix wktDisjoint( wktOne.length(), wktTwo.length() );

  CartesianDisjoint geomOne;
  CartesianDisjoint geomTwo;

  for (size_t i = 0; i < wktOne.length(); i++ ) {
    geomOne = read_cartesian_disjoint_wkt( wktOne[i] );

    for (size_t j = 0; j < wktTwo.length(); j++ ){
      geomTwo = read_cartesian_disjoint_wkt( wktTwo[j] );
      wktDisjoint(i, j) = bg::covered_by(geomOne, geomTwo);
    }
  }
  return wktDisjoint;
}


// [[Rcpp::export]]
Rcpp::LogicalMatrix rcpp_wkt_covered_by_spherical( Rcpp::List wktOne, Rcpp::List wktTwo ) {
  Rcpp::LogicalMatrix wktDisjoint( wktOne.length(), wktTwo.length() );

  SphericalDisjoint geomOne;
  SphericalDisjoint geomTwo;

  for (size_t i = 0; i < wktOne.length(); i++ ) {
    geomOne = read_spherical_disjoint_wkt( wktOne[i] );

    for (size_t j = 0; j < wktTwo.length(); j++ ){
      geomTwo = read_spherical_disjoint_wkt( wktTwo[j] );
      wktDisjoint(i, j) = bg::covered_by(geomOne, geomTwo);
    }
  }
  return wktDisjoint;
}

// [[Rcpp::export]]
Rcpp::LogicalMatrix rcpp_wkt_covered_by_geographic( Rcpp::List wktOne, Rcpp::List wktTwo ) {
  Rcpp::LogicalMatrix wktDisjoint( wktOne.length(), wktTwo.length() );

  GeographicDisjoint geomOne;
  GeographicDisjoint geomTwo;

  for (size_t i = 0; i < wktOne.length(); i++ ) {
    geomOne = read_geographic_disjoint_wkt( wktOne[i] );

    for (size_t j = 0; j < wktTwo.length(); j++ ){
      geomTwo = read_geographic_disjoint_wkt( wktTwo[j] );
      wktDisjoint(i, j) = bg::covered_by(geomOne, geomTwo);
    }
  }
  return wktDisjoint;
}
*/
