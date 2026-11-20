//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
