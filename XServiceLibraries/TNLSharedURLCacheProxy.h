//
#ifndef TNLSharedURLCacheProxy_h
#define TNLSharedURLCacheProxy_h
@import Foundation;

@class NSProxy;

@interface TNLSharedURLCacheProxy : NSProxy

/* instance methods */
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (void *)_CFURLCache;

@end

#endif /* TNLSharedURLCacheProxy_h */
