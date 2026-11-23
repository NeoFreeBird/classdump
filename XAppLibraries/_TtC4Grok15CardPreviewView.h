//
#ifndef _TtC4Grok15CardPreviewView_h
#define _TtC4Grok15CardPreviewView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface Grok.CardPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView topContainer;
    __C.UIView bottomContainer;
    __C.UIView dividerView;
    __C.UIImageView profilePicView;
    __C.UILabel profileLabelView;
    __C.UIImageView checkmarkView;
    __C.UIImageView affiliateBadgeView;
    __C.UILabel usernameDateLabel;
    __C.UIImageView imageView;
    __C.UILabel textLabel;
    nominal type descriptor for Foundation.URL ? profilePicURL;
    nominal type descriptor for Foundation.URL ? affiliateURL;
    nominal type descriptor for Foundation.URL ? thumbnailURL;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok15CardPreviewView_h */
