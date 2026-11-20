//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIContextMenuInteractionDelegate_Protocol_h
#define UIContextMenuInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIContextMenuInteractionDelegate <NSObject>

@required

/* required instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;

@optional

/* optional instance methods */
- (id)contextMenuInteraction:(id)interaction configuration:(id)configuration highlightPreviewForItemWithIdentifier:(id)identifier;
- (id)contextMenuInteraction:(id)interaction configuration:(id)configuration dismissalPreviewForItemWithIdentifier:(id)identifier;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willDisplayMenuForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willDisplayMenuForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willEndForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willEndForConfiguration:(id)configuration animator:(id)animator;
- (id)contextMenuInteraction:(id)interaction previewForHighlightingMenuWithConfiguration:(id)configuration;
- (id)contextMenuInteraction:(id)interaction previewForDismissingMenuWithConfiguration:(id)configuration;

@end

#endif /* UIContextMenuInteractionDelegate_Protocol_h */
