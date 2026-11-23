//
#ifndef T1TimelineDismissedItemDelegate_Protocol_h
#define T1TimelineDismissedItemDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TimelineDismissedItemDelegate <NSObject>

@required

/* required instance methods */
- (void)dismissTimelineItem:(id)item withFeedbackModule:(id)module derivedFromAction:(id)action;
- (void)dismissTimelineItem:(id)item withFeedbackModule:(id)module derivedFromAction:(id)action;
- (void)didRestoreTimelineItem:(id)item;

@optional

@end

#endif /* T1TimelineDismissedItemDelegate_Protocol_h */
