//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVManageGuestCallersViewControllerDelegate_Protocol_h
#define PTVManageGuestCallersViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVManageGuestCallersViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)manageGuestCallersViewController:(id)controller didSelectViewer:(id)viewer;
- (void)manageGuestCallersViewController:(id)controller didBlockUser:(id)user;

@end

#endif /* PTVManageGuestCallersViewControllerDelegate_Protocol_h */
