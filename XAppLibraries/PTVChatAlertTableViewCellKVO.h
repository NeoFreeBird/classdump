//
#ifndef PTVChatAlertTableViewCellKVO_h
#define PTVChatAlertTableViewCellKVO_h
@import Foundation;

#include "PTVChatAlertTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatAlertTableViewCellKVO : PTVChatAlertTableViewCell {
    /* instance variables */
    PTVMessage *_alert;
    _Bool _renderNewUserWelcomeMessage;
}

/* instance methods */
- (void)executeState;
- (void)handleTap;
- (void)setAlert:(id)alert renderNewUserWelcomeMessage:(_Bool)message;

@end

#endif /* PTVChatAlertTableViewCellKVO_h */
