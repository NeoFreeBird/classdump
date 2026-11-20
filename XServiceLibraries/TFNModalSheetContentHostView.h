//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetContentHostView_h
#define TFNModalSheetContentHostView_h
@import Foundation;

#include "TFNModalSheetViewController.h"

@class UIView;

@interface TFNModalSheetContentHostView : UIView

@property (weak, nonatomic) TFNModalSheetViewController *modalSheetViewController;
@property (readonly, nonatomic) UIView *handleView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGPath * contentMaskPath;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)tfn_isInPopover;

@end

#endif /* TFNModalSheetContentHostView_h */
