//
#ifndef TLTCoalescingDatabaseBackgroundTask_h
#define TLTCoalescingDatabaseBackgroundTask_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSRecursiveLock, UIApplication;

@interface TLTCoalescingDatabaseBackgroundTask : NSObject {
    /* instance variables */
    UIApplication *_application;
    NSRecursiveLock *_lock;
    unsigned long long _taskIdentifier;
    unsigned long long _nextRegistrationToken;
    unsigned long long _endGeneration;
    NSMutableDictionary *_expirationHandlersByToken;
}

/* instance methods */
- (id)initWithApplication:(id)application;
- (id /* block */)registerWorkWithExpirationHandler:(id /* block */)handler;
- (void)_tlt_endWorkForToken:(id)token;
- (void)_tlt_taskDidExpire:(unsigned long long)expire;

@end

#endif /* TLTCoalescingDatabaseBackgroundTask_h */
