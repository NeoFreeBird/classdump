//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift15MediaHeaderView_h
#define _TtC14T1TwitterSwift15MediaHeaderView_h
@import Foundation;

#include "T1ResizableHeaderView.h"

@class Swift.Bool, T1TwitterSwift.MediaHeaderView.TitleStyle, T1TwitterSwift.MediaHeaderViewModel ?, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSo11UIImageViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.MediaHeaderView : T1ResizableHeaderView { // (Swift)
    /* instance variables */
    __C.UIView mediaContainer;
    __C.UIImageView backgroundImageView;
    T1TwitterSwift.MediaHeaderViewModel ? mediaHeaderModel;
    Swift.String title;
    T1TwitterSwift.MediaHeaderView.TitleStyle titleStyle;
    Swift.Bool isTitleHidden;
    nominal type descriptor for CoreGraphics.CGFloat titleAlpha;
    __C.UILabel? navigationBarTitleLabelIfLoaded;
    __C.TFNButton? titlePillIfLoaded;
    __C.NSLayoutConstraint? titlePillLeadingConstraintIfLoaded;
    __C.NSLayoutConstraint? titlePillTopConstraintIfLoaded;
}

@property (nonatomic, readonly) double statusBarOffset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (double)headerBannerHeightForWidth:(double)width bannerAspectRatio:(double)ratio;
- (double)bannerAspectRatioForTraitCollection:(id)collection;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift15MediaHeaderView_h */
