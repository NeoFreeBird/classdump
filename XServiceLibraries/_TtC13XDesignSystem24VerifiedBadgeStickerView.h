//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem24VerifiedBadgeStickerView_h
#define _TtC13XDesignSystem24VerifiedBadgeStickerView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo6UIViewC;

@interface XDesignSystem.VerifiedBadgeStickerView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat badgeSize;
    nominal type descriptor for CoreGraphics.CGFloat outlineSize;
    __C.UIView checkmarkFill;
    __C.UIImageView outline;
    __C.UIImageView badge;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem24VerifiedBadgeStickerView_h */
