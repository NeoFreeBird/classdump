//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTotalViewersTableViewCellDelegate_Protocol_h
#define PTVTotalViewersTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTotalViewersTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)totalViewersTableViewCellClickedOnLive:(id)live;
- (void)totalViewersTableViewCellClickedOnReplay:(id)replay;

@optional

@end

#endif /* PTVTotalViewersTableViewCellDelegate_Protocol_h */
