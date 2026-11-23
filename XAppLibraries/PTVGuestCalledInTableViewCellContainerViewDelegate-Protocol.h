//
#ifndef PTVGuestCalledInTableViewCellContainerViewDelegate_Protocol_h
#define PTVGuestCalledInTableViewCellContainerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCalledInTableViewCellContainerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)containerView:(id)view didSelectAddGuestButton:(id)button;
- (void)containerView:(id)view addGuestButtonDidCompleteCountdown:(id)countdown;

@optional

/* optional instance methods */
- (void)containerViewDidTapToCancel:(id)cancel;

@end

#endif /* PTVGuestCalledInTableViewCellContainerViewDelegate_Protocol_h */
