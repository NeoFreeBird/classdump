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
