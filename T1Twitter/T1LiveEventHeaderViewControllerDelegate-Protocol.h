//
#ifndef T1LiveEventHeaderViewControllerDelegate_Protocol_h
#define T1LiveEventHeaderViewControllerDelegate_Protocol_h
@import Foundation;

#include "T1ResizableHeaderViewControllerDelegate-Protocol.h"

@protocol T1LiveEventHeaderViewControllerDelegate <T1ResizableHeaderViewControllerDelegate>

@required

/* required instance methods */
- (void)liveEventHeaderViewControllerDidTapBack:(id)back;
- (void)liveEventHeaderViewControllerDidTapMoreActions:(id)actions;
- (id)liveEventHeaderViewController:(id)controller moreMenuActionItemsForBarButtonItem:(id)item;

@optional

@end

#endif /* T1LiveEventHeaderViewControllerDelegate_Protocol_h */
