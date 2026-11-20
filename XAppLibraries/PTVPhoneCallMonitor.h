//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPhoneCallMonitor_h
#define PTVPhoneCallMonitor_h
@import Foundation;

#include "CXCallObserverDelegate-Protocol.h"
#include "PTVWeakSet.h"

@class CXCallObserver, NSObject, NSString;

@interface PTVPhoneCallMonitor : NSObject <CXCallObserverDelegate> {
    /* instance variables */
    PTVPhoneCallMonitor *_weakSelf;
    PTVWeakSet *_observers;
    CXCallObserver *_callKitObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)SharedInstance;
+ (void)AddPhoneCallObserver:(id)observer;
+ (void)RemovePhoneCallObserver:(id)observer;

/* instance methods */
- (id)init;
- (void)callObserver:(id)observer callChanged:(id)changed;
- (void)addPhoneCallObserver:(id)observer;
- (void)removePhoneCallObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (void)didReceiveIncomingPhoneCall;
- (void)didAcceptIncomingPhoneCall;
- (void)didDisconnectIncomingPhoneCall;

@end

#endif /* PTVPhoneCallMonitor_h */
