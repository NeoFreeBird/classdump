//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
