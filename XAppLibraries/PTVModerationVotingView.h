//
#ifndef PTVModerationVotingView_h
#define PTVModerationVotingView_h
@import Foundation;

#include "PTVModerationVotingViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface PTVModerationVotingView : UIView {
    /* instance variables */
    id <PTVModerationVotingViewDelegate> _delegate;
    UILabel *_instructionsLabel;
    UILabel *_messageLabel;
    UIButton *_learnMoreButton;
    UIImageView *_avatarImage;
    UIView *_messageContainerView;
    UIView *_progressBar;
    UIView *_waitingBar;
    UIView *_topMask;
    UIButton *_guiltyButton;
    UIButton *_innocentButton;
    UIButton *_notSureButton;
    double _progressPercentage;
}

@property (retain, nonatomic) NSString *message;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) double votingDuration;
@property (nonatomic) long long votingState;
@property (readonly, nonatomic) UILabel *waitingStatusLabel;
@property (readonly, nonatomic) UIView *dividingLine;

/* instance methods */
- (void)layoutSubviews;
- (void)layoutProgressBarWithVotingButtonHeight:(double)height;
- (void)layoutStatusLabelsAndMessage:(double)message;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithMessage:(id)message delegate:(id)delegate;
- (void)guiltyPressed;
- (void)innocentPressed;
- (void)notSurePressed;
- (void)learnMoreButtonPressed;
- (void)_setGuiltyButtonTitle;
- (double)maxVotingButtonLabelHeight;
- (double)maxVotingButtonLabelHeightForModerationVotingViewSize:(struct CGSize { double x0; double x1; })size;
- (double)dividingLineOriginY:(struct CGSize { double x0; double x1; })y;
- (double)waitingLabelOriginY:(struct CGSize { double x0; double x1; })y;
- (_Bool)showingMessage;
- (void)labelsAndButtonsAlphaState;
- (void)progressBarAlphaState;
- (void)waitingBarAlphaState:(_Bool)state;

@end

#endif /* PTVModerationVotingView_h */
