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
