//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFluidContainerAdView_h
#define GADFluidContainerAdView_h
@import Foundation;

#include "GADView.h"

@class UIView;

@interface GADFluidContainerAdView : GADView

@property (retain, nonatomic) UIView *view;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* GADFluidContainerAdView_h */
