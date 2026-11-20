//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoOverlayBackgroundView_h
#define PTVVideoOverlayBackgroundView_h
@import Foundation;

#include "PTVVideoOverlayBackgroundShadeView.h"

@class UIView;

@interface PTVVideoOverlayBackgroundView : UIView

@property (readonly, nonatomic) _Bool shouldShowPostBroadcastViews;
@property (readonly, nonatomic) UIView *postBroadcastShadeView;
@property (readonly, nonatomic) PTVVideoOverlayBackgroundShadeView *shadeView;
@property (retain, nonatomic) UIView *postBroadcastSnapshotView;
@property (nonatomic) double keyboardHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setShouldShowPostBroadcastViews:(_Bool)views animated:(_Bool)animated;
- (void)showPostBroadcastSnapshotView;

@end

#endif /* PTVVideoOverlayBackgroundView_h */
