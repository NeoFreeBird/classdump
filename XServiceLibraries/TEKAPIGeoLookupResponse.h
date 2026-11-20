//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
