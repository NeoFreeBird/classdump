//
#ifndef PTVGuestBroadcastingAlertTableViewCellKVO_h
#define PTVGuestBroadcastingAlertTableViewCellKVO_h
@import Foundation;

#include "PTVGuestBroadcastingAlertTableViewCell.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMessage.h"

@class NSObject;

@interface PTVGuestBroadcastingAlertTableViewCellKVO : PTVGuestBroadcastingAlertTableViewCell

@property (retain, nonatomic) PTVMessage *guestMessage;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVGuestBroadcastingAlertTableViewCellKVO_h */
