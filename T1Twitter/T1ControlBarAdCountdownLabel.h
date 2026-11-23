//
#ifndef T1ControlBarAdCountdownLabel_h
#define T1ControlBarAdCountdownLabel_h
@import Foundation;

@class TAVControlBarItem, UILabel, UIView;

@interface T1ControlBarAdCountdownLabel : TAVControlBarItem

@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UIView *countdownLabelContainerView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)t1_updateWithPlaybackState:(id)state;

@end

#endif /* T1ControlBarAdCountdownLabel_h */
