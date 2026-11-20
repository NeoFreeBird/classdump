//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
