//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift43ImmersiveScheduledBroadcastPosterPluginView_h
#define _TtC14T1TwitterSwift43ImmersiveScheduledBroadcastPosterPluginView_h
@import Foundation;

#include "T1ImmersiveCardPlayerViewProtocol-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveBroadcastCardViewModel ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, TAVPlayerViewConfiguration, UIImageView, UILayoutGuide, _$s10Foundation3URLVMn ?, _$sSo23TUIImageViewFetchHelperC, _$sSo6UIViewC;

@interface T1TwitterSwift.ImmersiveScheduledBroadcastPosterPluginView : UIImageView <T1ImmersiveCardPlayerViewProtocol> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveBroadcastCardViewModel ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    __C.TUIImageViewFetchHelper fetchHelper;
    nominal type descriptor for Foundation.URL ? lastPreviewImageURL;
    Swift.Bool isFrameDrivenByMorph;
    __C.UIView countdownScrimView;
}

@property (nonatomic, readonly) TAVPlayerViewConfiguration *configuration;
@property (nonatomic, readonly) UILayoutGuide *videoLayoutGuide;

/* instance methods */
- (void)passPlayerToOtherPlayerView:(id)view;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift43ImmersiveScheduledBroadcastPosterPluginView_h */
