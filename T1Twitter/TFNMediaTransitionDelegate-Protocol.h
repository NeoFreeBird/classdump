//
#ifndef TFNMediaTransitionDelegate_Protocol_h
#define TFNMediaTransitionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMediaTransitionDelegate <NSObject>

@required

/* required instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewFrameInWindow:(id)window forObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewFrameInWindow:(id)window forObject:(id)object;

@optional

/* optional instance methods */
- (void)mediaTransitionSetPreviewHidden:(_Bool)hidden forObject:(id)object;
- (void)mediaTransitionSetPreviewHidden:(_Bool)hidden forObject:(id)object;
- (void)mediaTransitionOfType:(long long)type willBeginForObject:(id)object;
- (void)mediaTransitionOfType:(long long)type willBeginForObject:(id)object;
- (void)mediaTransitionOfType:(long long)type didEndForObject:(id)object;
- (void)mediaTransitionOfType:(long long)type didEndForObject:(id)object;
- (long long)mediaTransitionPreviewContentModeForObject:(id)object;
- (long long)mediaTransitionPreviewContentModeForObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewContentsRectForObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewContentsRectForObject:(id)object;
- (id)mediaTransitionPreviewHostViewForObject:(id)object;
- (id)mediaTransitionPreviewHostViewForObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewHostViewFrameInWindow:(id)window forObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewHostViewFrameInWindow:(id)window forObject:(id)object;
- (_Bool)mediaTransitionShouldDismissPresentingViewControllerForObject:(id)object;
- (_Bool)mediaTransitionShouldDismissPresentingViewControllerForObject:(id)object;

@end

#endif /* TFNMediaTransitionDelegate_Protocol_h */
