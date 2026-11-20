//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TweetMediaAttachments23MultiMediaViewImageView_h
#define _TtC21TweetMediaAttachments23MultiMediaViewImageView_h
@import Foundation;

@class TFNTappableImageView, UIColor, UIImage, _$s14TFSTwitterCore16TwitterMediaInfoCMn ?, _$s14TFSTwitterCore24TwitterMediaColorPaletteCMn ?, _$sSd, _$sSi, _$sSo23TUIImageViewFetchHelperC, _$sSo6UIViewCSg, _$sSo7UIColorCSg;

@interface TweetMediaAttachments.MultiMediaViewImageView : TFNTappableImageView { // (Swift)
    /* instance variables */
    Swift.Double kShowPressedViewDelayInterval;
    __C.TUIImageViewFetchHelper fetchHelper;
    __C.UIView? $__lazy_storage_$_pressedView;
    __C.UIView? errorImageView;
    __C.UIView? altTextBadgeView;
    __C.UIView? attributionPillView;
    Swift.Int index;
    nominal type descriptor for TFSTwitterCore.TwitterMediaColorPalette ? palette;
    __C.UIColor? dominantBackgroundColor;
    __C.UIColor? fallbackBackgroundColor;
    nominal type descriptor for TFSTwitterCore.TwitterMediaInfo ? appliedMediaInfo;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) _Bool pressed;
@property (nonatomic, retain) UIImage *image;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)isPressed;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC21TweetMediaAttachments23MultiMediaViewImageView_h */
