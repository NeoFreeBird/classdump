//
#ifndef PTVChatContributorTableViewCellKVO_h
#define PTVChatContributorTableViewCellKVO_h
@import Foundation;

#include "PTVChatContributorTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatContributorTableViewCellKVO : PTVChatContributorTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* class methods */
+ (id)topStringForMessage:(id)message;
+ (id)bottomStringForMessage:(id)message;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVChatContributorTableViewCellKVO_h */
