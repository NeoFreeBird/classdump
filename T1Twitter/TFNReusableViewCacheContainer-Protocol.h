//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNReusableViewCacheContainer_Protocol_h
#define TFNReusableViewCacheContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNReusableViewCache;

@protocol TFNReusableViewCacheContainer <NSObject>

@required

@property (nonatomic, retain) TFNReusableViewCache *reusableViewCache;

@optional

@end

#endif /* TFNReusableViewCacheContainer_Protocol_h */
