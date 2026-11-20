//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAuthErrorObserver_h
#define PTVAuthErrorObserver_h
@import Foundation;

#include "PTVAuthErrorObserverDelegate-Protocol.h"

@class NSObject;

@interface PTVAuthErrorObserver : NSObject

@property (nonatomic) _Bool observing;
@property (weak, nonatomic) id <PTVAuthErrorObserverDelegate> delegate;

/* class methods */
+ (void)postAuthenticationErrorNotificationOnMainThread;
+ (void)postAuthenticationErrorNotificationOnMainThreadWithResponseDictionary:(id)dictionary;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)startObserving;
- (void)stopObserving;
- (void)didReceiveAuthenticationErrorNotification:(id)notification;
- (void)didObserveAuthError:(id)error;
- (_Bool)isObserving;

@end

#endif /* PTVAuthErrorObserver_h */
