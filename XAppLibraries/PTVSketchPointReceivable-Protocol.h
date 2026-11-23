//
#ifndef PTVSketchPointReceivable_Protocol_h
#define PTVSketchPointReceivable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSketchPointReceivable <NSObject>

@required

/* required instance methods */
- (void)enqueueSketchPoints:(id)points;
- (void)clearCanvasAnimated:(_Bool)animated;

@optional

@end

#endif /* PTVSketchPointReceivable_Protocol_h */
