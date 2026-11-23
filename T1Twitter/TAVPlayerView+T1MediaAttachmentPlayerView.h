//
#ifndef TAVPlayerView_T1MediaAttachmentPlayerView_h
#define TAVPlayerView_T1MediaAttachmentPlayerView_h
@import Foundation;

@interface TAVPlayerView (T1MediaAttachmentPlayerView) <T1ImmersiveCardPlayerViewProtocol, T1MediaAttachmentPlayerView>

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (id)t1_playerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;

/* instance methods */
- (void)passPlayerToOtherPlayerView:(id)view;
- (void)t1_configureVideoErrorLabel;
- (void)tfn_fontSizeChanged;
- (void)setErrorLabelStylingWithBackgroundColor:(id)color textColor:(id)color font:(id)font;
- (void)associatePlayerWithMediaURL:(id)url attachment:(id)attachment autoPlayOptions:(unsigned long long)options features:(id)features completion:(id /* block */)completion;

@end

#endif /* TAVPlayerView_T1MediaAttachmentPlayerView_h */
