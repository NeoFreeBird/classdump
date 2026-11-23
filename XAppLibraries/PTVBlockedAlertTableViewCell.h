//
#ifndef PTVBlockedAlertTableViewCell_h
#define PTVBlockedAlertTableViewCell_h
@import Foundation;

#include "PTVBlockedAlertTableViewCellContentView.h"
#include "PTVChatTableViewCell.h"

@class NSString;

@interface PTVBlockedAlertTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    PTVBlockedAlertTableViewCellContentView *_containerView;
    NSString *_blockedUsername;
}

/* instance methods */
- (void)layoutSubviews;
- (id)containerView;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)setBlockedUsername:(id)username;

@end

#endif /* PTVBlockedAlertTableViewCell_h */
