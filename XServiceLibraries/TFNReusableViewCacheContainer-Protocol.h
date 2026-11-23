//
#ifndef TFNReusableViewCacheContainer_Protocol_h
#define TFNReusableViewCacheContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNReusableViewCache.h"

@protocol TFNReusableViewCacheContainer <NSObject>

@required

@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;

@optional

@end

#endif /* TFNReusableViewCacheContainer_Protocol_h */
