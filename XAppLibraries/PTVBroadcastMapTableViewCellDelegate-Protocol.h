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
