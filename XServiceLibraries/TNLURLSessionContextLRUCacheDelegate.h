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
