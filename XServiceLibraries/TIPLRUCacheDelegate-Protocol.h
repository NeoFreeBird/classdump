//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
