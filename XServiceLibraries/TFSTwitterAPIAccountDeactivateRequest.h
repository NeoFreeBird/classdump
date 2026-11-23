//
#ifndef TFSTwitterAPIAccountDeactivateRequest_h
#define TFSTwitterAPIAccountDeactivateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountDeactivateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)responseHydrationFlags;
+ (long long)HTTPMethodValue;
+ (id)configuration;

/* instance methods */
- (id)initWithPassword:(id)password requestTimespan:(unsigned long long)timespan context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountDeactivateRequest_h */
