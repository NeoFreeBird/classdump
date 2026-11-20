//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastMapTableViewCellDelegate_Protocol_h
#define PTVBroadcastMapTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastMapTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)didLongPressOnMapView;

@optional

@end

#endif /* PTVBroadcastMapTableViewCellDelegate_Protocol_h */
