//
#ifndef TEKAPIGeoLookupRequest_h
#define TEKAPIGeoLookupRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSString;

@interface TEKAPIGeoLookupRequest : TEKAPIRequest

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double accuracy;
@property (readonly, copy, nonatomic) NSString *query;

/* instance methods */
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate accuracy:(double)accuracy;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate accuracy:(double)accuracy query:(id)query;
- (id)parameters;
- (id)headers;
- (id)endpointPath;
- (Class)responseClass;

@end

#endif /* TEKAPIGeoLookupRequest_h */
