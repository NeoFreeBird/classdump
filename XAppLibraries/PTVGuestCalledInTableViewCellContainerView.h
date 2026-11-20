//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCalledInTableViewCellContainerView_h
#define PTVGuestCalledInTableViewCellContainerView_h
@import Foundation;

#include "PTVAddGuestCountdownButton.h"
#include "PTVGuestCalledInTableViewCellContainerViewDelegate-Protocol.h"
#include "PTVProfileImageView.h"

@class NSArray, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface PTVGuestCalledInTableViewCellContainerView : UIView {
    /* instance variables */
    UITapGestureRecognizer *_containerViewTapRecognizer;
    PTVProfileImageView *_profileImageView;
    UIImageView *_audioOnlyImageView;
    UIView *_audioOnlyImageUnderlay;
    UILabel *_usernameLabel;
    UILabel *_hasCalledInLabel;
    UILabel *_tapToCancelLabel;
    UILabel *_wasAddedLabel;
    UILabel *_hasCanceledLabel;
    NSArray *_defaultYAxisConstraints;
    NSArray *_countdownYAxisConstraints;
    _Bool _addGuestButtonVisible;
    PTVAddGuestCountdownButton *_addGuestButton;
    unsigned long long _guestCallerSessionState;
    long long _participantIndex;
}

@property (readonly, nonatomic) UIView *alertContainerView;
@property (weak, nonatomic) id <PTVGuestCalledInTableViewCellContainerViewDelegate> delegate;
@property (nonatomic) _Bool useLargeChatFont;
@property (nonatomic) _Bool enableTapRecognizerOnContentView;

/* class methods */
+ (double)HeightThatFits:(_Bool)fits;
+ (id)HasCalledInString;
+ (id)WasAddedString;
+ (id)HasCanceledString;
+ (id)AttributedAlert:(id)alert UseLargeChatFont:(_Bool)font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)reconcileYAxisConstraintsOfLabels:(_Bool)labels;
- (void)activateYAxisConstraitsAfterReconciliation;
- (void)setParticipantIndex:(long long)index;
- (void)animateBackgroundColorIfNeeded;
- (void)setGuestCallerSessionState:(unsigned long long)state countdownEndDate:(id)date isDisabled:(_Bool)disabled;
- (unsigned long long)guestCallerSessionState;
- (void)setAddGuestButtonVisible:(_Bool)visible;
- (void)reconcileButtonState:(_Bool)state;
- (void)updateAlphaToReconcileButtonState;
- (void)addGuestButtonPressed;
- (void)addGuestButtonDidCompleteCountdown;
- (void)setUsername:(id)username;
- (void)setProfileImageURL:(id)url;
- (void)reconcileButtonStrings;
- (void)setIsPendingRequestAudioOnly:(_Bool)only;
- (void)containerViewTapRecognitionStateDidChange;
- (void)didTapContainerView;

@end

#endif /* PTVGuestCalledInTableViewCellContainerView_h */
