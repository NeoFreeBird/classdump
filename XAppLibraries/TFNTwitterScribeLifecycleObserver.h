//
#ifndef TFNTwitterScribeLifecycleObserver_h
#define TFNTwitterScribeLifecycleObserver_h
@import Foundation;

@class NSObject, TFSScribe;

@interface TFNTwitterScribeLifecycleObserver : NSObject

@property (retain, nonatomic) TFSScribe *scribeService;

/* instance methods */
- (id)initWithScribeService:(id)service;
- (id)init;
- (void)_didRemoveAccountNotification:(id)notification;

@end

#endif /* TFNTwitterScribeLifecycleObserver_h */
