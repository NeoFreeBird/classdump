//
#ifndef T1Canary_h
#define T1Canary_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface T1Canary : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_canaryQueue;
}

@property (readonly, nonatomic) _Bool didResetCanary;

/* instance methods */
- (id)init;
- (void)_t1_setKeychainCanary;
- (void)_t1_resetCanaryIfNecessary;
- (void)start;

@end

#endif /* T1Canary_h */
