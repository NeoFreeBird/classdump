//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIRankBadgeView_h
#define TUIRankBadgeView_h
@import Foundation;

@class UIColor, UIView;

@interface TUIRankBadgeView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_gradientLayer;
    @40@0:8:16@24@32 $__lazy_storage_$_rankLabel;
}

@property (nonatomic) long long rank;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* TUIRankBadgeView_h */
