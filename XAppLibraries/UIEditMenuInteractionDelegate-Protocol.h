//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIEditMenuInteractionDelegate_Protocol_h
#define UIEditMenuInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIEditMenuInteractionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)editMenuInteraction:(id)interaction menuForConfiguration:(id)configuration suggestedActions:(id)actions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)interaction targetRectForConfiguration:(id)configuration;
- (void)editMenuInteraction:(id)interaction willPresentMenuForConfiguration:(id)configuration animator:(id)animator;
- (void)editMenuInteraction:(id)interaction willDismissMenuForConfiguration:(id)configuration animator:(id)animator;

@end

#endif /* UIEditMenuInteractionDelegate_Protocol_h */
