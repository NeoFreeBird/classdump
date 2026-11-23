//
#ifndef T1ControlBarAdSkipControl_h
#define T1ControlBarAdSkipControl_h
@import Foundation;

#include "T1VideoAdButton.h"
#include "T1VideoSkipCountdownLabel.h"

@class TAVControlBarItem, UIStackView, UIView;

@interface T1ControlBarAdSkipControl : TAVControlBarItem

@property (retain, nonatomic) T1VideoAdButton *skipAdButton;
@property (retain, nonatomic) T1VideoSkipCountdownLabel *skipCountdownLabel;
@property (retain, nonatomic) UIView *skipCountdownLabelContainerView;
@property (retain, nonatomic) UIStackView *containerView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)t1_updateWithPlaybackState:(id)state;
- (void)_t1_didTapSkipAdButton;

@end

#endif /* T1ControlBarAdSkipControl_h */
