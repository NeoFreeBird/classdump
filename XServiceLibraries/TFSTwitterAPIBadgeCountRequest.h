//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIBadgeCountRequest_h
#define TFSTwitterAPIBadgeCountRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIBadgeCountRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithActivityModelVersion:(id)version urtEnabled:(_Bool)enabled xchatEnabled:(_Bool)enabled grokBotEnabled:(_Bool)enabled context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIBadgeCountRequest_h */
