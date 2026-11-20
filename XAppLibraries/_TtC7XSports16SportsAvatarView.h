//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports16SportsAvatarView_h
#define _TtC7XSports16SportsAvatarView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.SportsImageLoader ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg;

@interface XSports.SportsAvatarView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UIImageView photoView;
    XSports.SportsImageLoader ? $__lazy_storage_$_loader;
    Swift.Bool usesLogo;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports16SportsAvatarView_h */
