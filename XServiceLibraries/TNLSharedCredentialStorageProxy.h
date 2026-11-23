//
#ifndef TNLSharedCredentialStorageProxy_h
#define TNLSharedCredentialStorageProxy_h
@import Foundation;

@class NSProxy;

@interface TNLSharedCredentialStorageProxy : NSProxy

/* instance methods */
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;

@end

#endif /* TNLSharedCredentialStorageProxy_h */
