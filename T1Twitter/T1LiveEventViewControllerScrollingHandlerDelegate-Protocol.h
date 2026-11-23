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
