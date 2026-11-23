//
#ifndef TNLSharedCookieStorageProxy_h
#define TNLSharedCookieStorageProxy_h
@import Foundation;

@class NSProxy;

@interface TNLSharedCookieStorageProxy : NSProxy

/* instance methods */
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)description;

@end

#endif /* TNLSharedCookieStorageProxy_h */
