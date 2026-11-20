//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVManageGuestCallersActionsCollectionViewCellDelegate_Protocol_h
#define PTVManageGuestCallersActionsCollectionViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVManageGuestCallersActionsCollectionViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)actionsCellDidSelectDisableCallIns:(id)ins;
- (void)actionsCellDidSelectRequestCallIns:(id)ins;

@optional

@end

#endif /* PTVManageGuestCallersActionsCollectionViewCellDelegate_Protocol_h */
