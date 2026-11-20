//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports28SportsMediaSectionHeaderView_h
#define _TtC7XSports28SportsMediaSectionHeaderView_h
@import Foundation;

@class UICollectionReusableView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC;

@interface XSports.SportsMediaSectionHeaderView : UICollectionReusableView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UILabel descriptionLabel;
    nominal type descriptor for CoreGraphics.CGFloat topPadding;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports28SportsMediaSectionHeaderView_h */
