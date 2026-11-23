//
#ifndef PTVSetupGuestCallTableViewCellDelegate_Protocol_h
#define PTVSetupGuestCallTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSetupGuestCallTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)tableViewCell:(id)cell didSetupGuestCallWithAudioOnly:(_Bool)only;

@optional

@end

#endif /* PTVSetupGuestCallTableViewCellDelegate_Protocol_h */
