//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections24ElectionsHubTitleControl_h
#define _TtC10XElections24ElectionsHubTitleControl_h
@import Foundation;

@class UIControl, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewCSg, _$sSo22UIAccessibilityElementCSg, _$sSo7UILabelC;

@interface XElections.ElectionsHubTitleControl : UIControl { // (Swift)
    /* instance variables */
    __C.UIImageView? logoView;
    __C.UIImageView? backIconView;
    __C.UILabel titleLabel;
    nominal type descriptor for CoreGraphics.CGFloat maximumWidth;
    __C.UIAccessibilityElement? $__lazy_storage_$_backElement;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XElections24ElectionsHubTitleControl_h */
