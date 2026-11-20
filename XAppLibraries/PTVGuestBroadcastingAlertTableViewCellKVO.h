//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
