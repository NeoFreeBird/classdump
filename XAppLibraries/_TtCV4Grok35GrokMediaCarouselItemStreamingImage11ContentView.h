//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCV4Grok35GrokMediaCarouselItemStreamingImage11ContentView_h
#define _TtCV4Grok35GrokMediaCarouselItemStreamingImage11ContentView_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"

@class Swift.Bool, UIView, _$sSi, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sySo7UIImageCc, _$syyc;

@interface Grok.GrokMediaCarouselItemStreamingImage.ContentView : UIView <UIContextMenuInteractionDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool showPostImageOption;
    (__C.UIImage) -> () saveImage;
    (__C.UIImage) -> () copyImage;
    (__C.UIImage) -> () postImage;
    (__C.UIImage) -> () editImage;
    () -> () presentFullscreenImageSlideshow;
    __C.UIView animationContainerView;
    __C.UIImageView imageView;
    __C.UIView gradientView;
    __C.CAGradientLayer gradientLayer;
    Swift.Int progress;
    __C.NSLayoutConstraint? animationContainerViewHeightConstraint;
    __C.NSLayoutConstraint? imageViewHeightConstraint;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCV4Grok35GrokMediaCarouselItemStreamingImage11ContentView_h */
