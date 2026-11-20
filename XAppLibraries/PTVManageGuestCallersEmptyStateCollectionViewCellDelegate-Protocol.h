//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVManageGuestCallersEmptyStateCollectionViewCellDelegate_Protocol_h
#define PTVManageGuestCallersEmptyStateCollectionViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVManageGuestCallersEmptyStateCollectionViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)emptyCellDidSelectRequestCallIns:(id)ins;

@optional

@end

#endif /* PTVManageGuestCallersEmptyStateCollectionViewCellDelegate_Protocol_h */
