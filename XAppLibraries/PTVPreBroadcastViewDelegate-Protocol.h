//
#ifndef PTVPreBroadcastViewDelegate_Protocol_h
#define PTVPreBroadcastViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVBasePreBroadcastViewDelegate-Protocol.h"

@protocol PTVPreBroadcastViewDelegate <NSObject, PTVBasePreBroadcastViewDelegate>

@required

/* required instance methods */
- (void)preBroadcastViewDidPressBackToSourceButton:(id)button;
- (void)preBroadcastViewDidGestureFlipCamera:(id)camera;

@optional

@end

#endif /* PTVPreBroadcastViewDelegate_Protocol_h */
