//
#ifndef GADFramerateObserver_Protocol_h
#define GADFramerateObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADFramerateObserver <NSObject>

@required

/* required instance methods */
- (void)framerateMonitorDidDetectDroppedFrames:(long long)frames;

@optional

@end

#endif /* GADFramerateObserver_Protocol_h */
