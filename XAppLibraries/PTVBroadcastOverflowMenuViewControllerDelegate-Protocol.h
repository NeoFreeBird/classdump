//
#ifndef PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h
#define PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOverflowMenuViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)overflowMenu:(id)menu didSelectMenuItem:(id)item;
- (_Bool)overflowMenu:(id)menu shouldEnableMenuItem:(id)item;

@optional

/* optional instance methods */
- (void)overflowMenuDidTapEmptySpace:(id)space;
- (void)overflowMenu:(id)menu didTapTitleHashtag:(id)hashtag;

@end

#endif /* PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h */
