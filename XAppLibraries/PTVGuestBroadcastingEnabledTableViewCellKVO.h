//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestBroadcastingEnabledTableViewCellKVO_h
#define PTVGuestBroadcastingEnabledTableViewCellKVO_h
@import Foundation;

#include "PTVGuestBroadcastingEnabledTableViewCell.h"
#include "PTVMessage.h"

@interface PTVGuestBroadcastingEnabledTableViewCellKVO : PTVGuestBroadcastingEnabledTableViewCell

@property (retain, nonatomic) PTVMessage *message;
@property (nonatomic) _Bool loggedInUserIsBroadcaster;

/* instance methods */
- (void)executeState;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)didPressGuestBroadcastingButton;

@end

#endif /* PTVGuestBroadcastingEnabledTableViewCellKVO_h */
