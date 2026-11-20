//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSketchInputViewDelegate_Protocol_h
#define PTVSketchInputViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSketchInputViewDelegate <NSObject>

@required

/* required instance methods */
- (void)sketchInputViewDidFinishDrawing:(id)drawing;
- (void)sketchInputView:(id)view didChangeToSketchColor:(id)color;
- (void)sketchInputView:(id)view didRequestColorWithTouches:(id)touches callback:(id /* block */)callback;
- (void)sketchInputView:(id)view didBeginStrokeWithTouches:(id)touches;
- (void)sketchInputView:(id)view didReceiveStrokeTouches:(id)touches;
- (void)sketchInputView:(id)view didEndStrokeWithTouches:(id)touches;
- (void)didDoubleTapSketchInputView:(id)view;
- (void)sketchInputView:(id)view didPinchToScale:(double)scale velocity:(double)velocity;

@optional

@end

#endif /* PTVSketchInputViewDelegate_Protocol_h */
