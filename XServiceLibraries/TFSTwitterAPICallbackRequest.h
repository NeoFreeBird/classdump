//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICallbackRequest_h
#define TFSTwitterAPICallbackRequest_h
@import Foundation;

#include "TFSTwitterAPIVersionedCallbackRequest.h"

@interface TFSTwitterAPICallbackRequest : TFSTwitterAPIVersionedCallbackRequest

/* class methods */
+ (id)private_stripVersionFromPath:(id)path;
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithEndpointPath:(id)path context:(id)context;

@end

#endif /* TFSTwitterAPICallbackRequest_h */
