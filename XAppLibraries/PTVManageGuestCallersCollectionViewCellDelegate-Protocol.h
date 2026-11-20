//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVManageGuestCallersCollectionViewCellDelegate_Protocol_h
#define PTVManageGuestCallersCollectionViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVManageGuestCallersCollectionViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)guestCallerCellDidSelectProfileImage:(id)image;
- (void)guestCallerCell:(id)cell didSelectAddGuestButton:(id)button;
- (void)guestCallerCell:(id)cell addGuestButtonDidCompleteCountdown:(id)countdown;

@optional

@end

#endif /* PTVManageGuestCallersCollectionViewCellDelegate_Protocol_h */
