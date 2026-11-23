//
#ifndef _TtC9XCashTags28CashTagTradePlatformFacepile_h
#define _TtC9XCashTags28CashTagTradePlatformFacepile_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XCashTags.CashTagTradeLogoImageView, _$sSo16TIPImagePipelineC;

@interface XCashTags.CashTagTradePlatformFacepile : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat logoSize;
    __C.TIPImagePipeline imagePipeline;
    Swift.Array -> XCashTags.CashTagTradeLogoImageView logoViews;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags28CashTagTradePlatformFacepile_h */
