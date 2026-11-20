//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationPlayerEndpointsManagerCacheRecord_h
#define TAVFoundationPlayerEndpointsManagerCacheRecord_h
@import Foundation;

#include "TAVVideoQualityEndpoint.h"

@class NSObject, NSURL;

@interface TAVFoundationPlayerEndpointsManagerCacheRecord : NSObject

@property (readonly, nonatomic) TAVVideoQualityEndpoint *cacheEndpoint;
@property (readonly, nonatomic) NSURL *assetURL;

/* instance methods */
- (id)initWithAssetURL:(id)url;

@end

#endif /* TAVFoundationPlayerEndpointsManagerCacheRecord_h */
