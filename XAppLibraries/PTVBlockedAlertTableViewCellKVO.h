//
#ifndef PTVBlockedAlertTableViewCellKVO_h
#define PTVBlockedAlertTableViewCellKVO_h
@import Foundation;

#include "PTVBlockedAlertTableViewCell.h"
#include "PTVMessage.h"

@interface PTVBlockedAlertTableViewCellKVO : PTVBlockedAlertTableViewCell

@property (retain, nonatomic) PTVMessage *alert;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVBlockedAlertTableViewCellKVO_h */
