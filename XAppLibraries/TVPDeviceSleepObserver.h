//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
