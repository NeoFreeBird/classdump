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
