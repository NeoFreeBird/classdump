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
