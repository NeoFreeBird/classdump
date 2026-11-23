//
#ifndef T1StatusPostInstallPromptView_h
#define T1StatusPostInstallPromptView_h
@import Foundation;

#include "T1StatusPostInstallPromptViewDelegate-Protocol.h"

@class TFNButton, TFNInlineFeedbackView, UIView;

@interface T1StatusPostInstallPromptView : UIView

@property (retain, nonatomic) TFNInlineFeedbackView *feedbackView;
@property (retain, nonatomic) TFNButton *alreadyInstalledButton;
@property (weak, nonatomic) id <T1StatusPostInstallPromptViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateFromLayoutState:(id)state;
- (void)setFeedbackConfiguration:(id)configuration;
- (void)setAlreadyInstallButtonEnabled:(_Bool)enabled;
- (void)_t1_alreadyInstalledTapped;

@end

#endif /* T1StatusPostInstallPromptView_h */
