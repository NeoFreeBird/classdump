//
#ifndef PTVBroadcastOverflowViewDelegate_Protocol_h
#define PTVBroadcastOverflowViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOverflowViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastOverflowViewDidSelectDismiss:(id)dismiss;
- (void)broadcastOverflowViewDidSelectBack:(id)back;

@end

#endif /* PTVBroadcastOverflowViewDelegate_Protocol_h */
