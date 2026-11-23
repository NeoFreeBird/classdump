//
#ifndef PKCanvasViewDelegate_Protocol_h
#define PKCanvasViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@protocol PKCanvasViewDelegate <NSObject, UIScrollViewDelegate>

@required

@optional

/* optional instance methods */
- (void)canvasViewDrawingDidChange:(id)change;
- (void)canvasViewDidFinishRendering:(id)rendering;
- (void)canvasViewDidBeginUsingTool:(id)tool;
- (void)canvasViewDidEndUsingTool:(id)tool;
- (void)canvasViewSelectionDidChange:(id)change;

@end

#endif /* PKCanvasViewDelegate_Protocol_h */
