//
#ifndef PTVBroadcastScrollViewDelegate_Protocol_h
#define PTVBroadcastScrollViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastScrollViewDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastScrollView:(id)view willBeginDragging:(struct CGPoint { double x0; double x1; })dragging;
- (void)broadcastScrollView:(id)view contentOffsetChanged:(struct CGPoint { double x0; double x1; })changed;

@optional

@end

#endif /* PTVBroadcastScrollViewDelegate_Protocol_h */
