//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
