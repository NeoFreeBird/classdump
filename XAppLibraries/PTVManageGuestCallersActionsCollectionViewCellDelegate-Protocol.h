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
