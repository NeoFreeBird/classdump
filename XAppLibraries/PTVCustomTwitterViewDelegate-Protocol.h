//
#ifndef PTVCustomTwitterViewDelegate_Protocol_h
#define PTVCustomTwitterViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVCustomTwitterViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)viewControllerForFollowPromptMessage;
- (id)viewControllerForProfileFollow:(id)follow;
- (id)viewControllerForProfileBannerForTwitterUser:(id)user withLeftMargin:(double)margin leftOffset:(double)offset avatarWidth:(double)width;
- (_Bool)shouldSkipBroadcastIntroViewOnViewWillAppear;
- (_Bool)showClickableHashTagsInBroadcastOverflowMenu;
- (id)retweetGreenColor;
- (id)retweetImage;
- (id)videoDockingButtonView;
- (id)backToEventButtonView;
- (id)dismissButton;
- (_Bool)navigationItemOrderInverted;
- (_Bool)navigationDismissItemDisplaysBelowNotch;

@end

#endif /* PTVCustomTwitterViewDelegate_Protocol_h */
