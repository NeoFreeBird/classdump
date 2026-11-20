//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
