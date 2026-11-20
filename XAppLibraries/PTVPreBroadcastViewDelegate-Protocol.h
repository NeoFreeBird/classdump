//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
