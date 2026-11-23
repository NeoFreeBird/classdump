//
#ifndef TEKAPIGeoLookupResponse_h
#define TEKAPIGeoLookupResponse_h
@import Foundation;

#include "TEKAPIResponse.h"

@class NSArray;

@interface TEKAPIGeoLookupResponse : TEKAPIResponse

@property (readonly, nonatomic) _Bool hasAttributions;
@property (readonly, nonatomic) _Bool foursquareAttribution;
@property (readonly, copy, nonatomic) NSArray *matchingPlaces;
@property (readonly, copy, nonatomic) NSArray *matchingNeighborhoods;

/* instance methods */
- (void)prepare;
- (_Bool)shouldTreatStatusCodeAsHTTPError;

@end

#endif /* TEKAPIGeoLookupResponse_h */
