//
#ifndef _TtC19TwitterSelfServeAds19BoostCtaPreviewView_h
#define _TtC19TwitterSelfServeAds19BoostCtaPreviewView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface TwitterSelfServeAds.BoostCtaPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.UIView scalingView;
    __C.UIImageView avatarImageView;
    __C.UILabel nameLabel;
    __C.UILabel actionLabel;
    __C.UIImageView chevronView;
    __C.UIStackView leadingStack;
    __C.UIStackView trailingStack;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for Foundation.URL ? avatarURL;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19TwitterSelfServeAds19BoostCtaPreviewView_h */
