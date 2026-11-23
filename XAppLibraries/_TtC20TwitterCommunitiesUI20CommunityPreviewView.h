//
#ifndef _TtC20TwitterCommunitiesUI20CommunityPreviewView_h
#define _TtC20TwitterCommunitiesUI20CommunityPreviewView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewCSg, _$sSo15TFNGradientViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface TwitterCommunitiesUI.CommunityPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView bannerImageView;
    __C.TFNGradientView bannerGradientView;
    __C.UIView accentView;
    __C.UIStackView? $__lazy_storage_$_backgroundViewStackView;
    __C.UILabel titleLabel;
    __C.UILabel descriptionLabel;
    __C.UIView previewPillView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC20TwitterCommunitiesUI20CommunityPreviewView_h */
