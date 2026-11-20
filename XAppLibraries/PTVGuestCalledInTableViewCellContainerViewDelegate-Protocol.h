//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
