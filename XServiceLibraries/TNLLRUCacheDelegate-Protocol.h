//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLLRUCacheDelegate_Protocol_h
#define TNLLRUCacheDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLLRUCacheDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_cache:(id)tnl_cache didEvictEntry:(id)entry;
- (_Bool)tnl_cache:(id)tnl_cache canEvictEntry:(id)entry;

@end

#endif /* TNLLRUCacheDelegate_Protocol_h */
