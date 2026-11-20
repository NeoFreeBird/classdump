//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADInterscrollerContainerAdView_h
#define GADInterscrollerContainerAdView_h
@import Foundation;

#include "GADView.h"

@class UILabel, UIView;

@interface GADInterscrollerContainerAdView : GADView {
    /* instance variables */
    UILabel *_headerView;
    UILabel *_footerView;
}

@property (retain, nonatomic) UIView *adView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context configuration:(id)configuration;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)createLabelsWithConfiguration:(id)configuration;
- (void)didMoveToWindow;

@end

#endif /* GADInterscrollerContainerAdView_h */
