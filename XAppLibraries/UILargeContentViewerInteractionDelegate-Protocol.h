//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UILargeContentViewerInteractionDelegate_Protocol_h
#define UILargeContentViewerInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UILargeContentViewerInteractionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)largeContentViewerInteraction:(id)interaction didEndOnItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)largeContentViewerInteraction:(id)interaction didEndOnItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (id)largeContentViewerInteraction:(id)interaction itemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)largeContentViewerInteraction:(id)interaction itemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)viewControllerForLargeContentViewerInteraction:(id)interaction;
- (id)viewControllerForLargeContentViewerInteraction:(id)interaction;

@end

#endif /* UILargeContentViewerInteractionDelegate_Protocol_h */
