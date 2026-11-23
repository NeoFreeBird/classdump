//
#ifndef TVPDeviceSleepObserver_h
#define TVPDeviceSleepObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class NSObject, UIApplication;

@interface TVPDeviceSleepObserver : NSObject <TAVPlaybackObserver>

@property (retain, nonatomic) id idleTimerToken;
@property (weak, nonatomic) UIApplication *application;

/* instance methods */
- (id)initWithApplication:(id)application;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TVPDeviceSleepObserver_h */
