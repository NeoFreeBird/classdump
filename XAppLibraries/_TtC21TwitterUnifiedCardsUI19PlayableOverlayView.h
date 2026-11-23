//
#ifndef _TtC21TwitterUnifiedCardsUI19PlayableOverlayView_h
#define _TtC21TwitterUnifiedCardsUI19PlayableOverlayView_h
@import Foundation;

@class Swift.Bool, TwitterUnifiedCards.DestinationModel ?, TwitterUnifiedCardsUI.LoadingIndicatorView, TwitterUnifiedCardsUI.PlayableOverlayViewDelegate ?, UIView, _$s14TFSTwitterCore18TwitterEntityMediaCMn ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineC, _$sSo9TFNButtonCSg;

@interface TwitterUnifiedCardsUI.PlayableOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton? closeButton;
    Swift.Bool muted;
    TwitterUnifiedCardsUI.PlayableOverlayViewDelegate ? delegate;
    TwitterUnifiedCards.DestinationModel ? destinationModel;
    __C.TIPImagePipeline imagePipeline;
    nominal type descriptor for TFSTwitterCore.TwitterEntityMedia ? profileImage;
    TwitterUnifiedCardsUI.LoadingIndicatorView activityIndicator;
    __C.UIImageView backgroundView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)loadCompletedWithSuccess:(_Bool)success;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didTapClose;

@end

#endif /* _TtC21TwitterUnifiedCardsUI19PlayableOverlayView_h */
