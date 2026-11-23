//
#ifndef EKEventEditViewDelegate_Protocol_h
#define EKEventEditViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol EKEventEditViewDelegate <NSObject>

@required

/* required instance methods */
- (void)eventEditViewController:(id)controller didCompleteWithAction:(long long)action;
- (void)eventEditViewController:(id)controller didCompleteWithAction:(long long)action;

@optional

/* optional instance methods */
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)events;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)events;

@end

#endif /* EKEventEditViewDelegate_Protocol_h */
