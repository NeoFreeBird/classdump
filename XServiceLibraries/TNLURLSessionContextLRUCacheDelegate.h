//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLURLSessionContextLRUCacheDelegate_h
#define TNLURLSessionContextLRUCacheDelegate_h
@import Foundation;

#include "TNLLRUCacheDelegate-Protocol.h"

@class NSObject, NSString;

@interface TNLURLSessionContextLRUCacheDelegate : NSObject <TNLLRUCacheDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tnl_cache:(id)tnl_cache didEvictEntry:(id)entry;

@end

#endif /* TNLURLSessionContextLRUCacheDelegate_h */
