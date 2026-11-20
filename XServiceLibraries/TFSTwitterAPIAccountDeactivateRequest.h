//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
