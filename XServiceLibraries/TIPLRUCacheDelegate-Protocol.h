//
#ifndef TIPLRUCacheDelegate_Protocol_h
#define TIPLRUCacheDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPLRUCacheDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tip_cache:(id)tip_cache didEvictEntry:(id)entry;
- (_Bool)tip_cache:(id)tip_cache canEvictEntry:(id)entry;

@end

#endif /* TIPLRUCacheDelegate_Protocol_h */
