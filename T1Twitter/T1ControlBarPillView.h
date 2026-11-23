//
#ifndef T1ControlBarPillView_h
#define T1ControlBarPillView_h
@import Foundation;

#include "T1BroadcastPillView.h"

@class TAVControlBarItem;

@interface T1ControlBarPillView : TAVControlBarItem

@property (readonly, nonatomic) T1BroadcastPillView *pillView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;

@end

#endif /* T1ControlBarPillView_h */
