//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventViewControllerScrollingHandlerDelegate_Protocol_h
#define T1LiveEventViewControllerScrollingHandlerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventViewControllerScrollingHandlerDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventViewControllerScrollingHandlerDidExceedDockingThreshold:(id)threshold;
- (void)liveEventViewControllerScrollingHandlerDidPrecedeDockingThreshold:(id)threshold;

@optional

@end

#endif /* T1LiveEventViewControllerScrollingHandlerDelegate_Protocol_h */
