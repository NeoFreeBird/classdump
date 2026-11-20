//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVScreenshotObserverDelegate_Protocol_h
#define PTVScreenshotObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVScreenshotObserverDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)screenshotObserverDidObserveUserTakeScreenshot:(id)screenshot;

@end

#endif /* PTVScreenshotObserverDelegate_Protocol_h */
