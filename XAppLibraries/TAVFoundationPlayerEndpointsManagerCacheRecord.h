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
