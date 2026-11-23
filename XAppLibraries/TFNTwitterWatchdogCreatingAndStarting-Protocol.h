//
#ifndef TFNTwitterWatchdogCreatingAndStarting_Protocol_h
#define TFNTwitterWatchdogCreatingAndStarting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterWatchdogCreatingAndStarting <NSObject>

@required

/* class methods */
+ (id)createAndStartWatchdogWithIntervalSinceStartTime:(double)time;
+ (id)createAndStartWatchdog;

@optional

@end

#endif /* TFNTwitterWatchdogCreatingAndStarting_Protocol_h */
