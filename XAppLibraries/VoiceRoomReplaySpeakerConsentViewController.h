//
#ifndef VoiceRoomReplaySpeakerConsentViewController_h
#define VoiceRoomReplaySpeakerConsentViewController_h
@import Foundation;

#include "TASSpacesTrayContent-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "VoiceRoomReplaySpeakerConsentViewControllerDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface VoiceRoomReplaySpeakerConsentViewController : TFNViewController <TFNAttributedTextViewDelegate, TASSpacesTrayContent, TFNModalSheetViewControllerLayoutDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 isInvitedToSpeak;
    @40@0:8:16@24@32 isRecording;
    @40@0:8:16@24@32 recordingView;
    @40@0:8:16@24@32 $__lazy_storage_$_iconView;
    @40@0:8:16@24@32 $__lazy_storage_$_titleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_subtitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_detailsLabel;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) NSString *spacesTraySecondaryActionTitle;
@property (nonatomic, readonly) _Bool shouldJoin;
@property (nonatomic, weak) id <VoiceRoomReplaySpeakerConsentViewControllerDelegate> delegate;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)spacesTrayDidPressPrimaryAction;
- (void)spacesTrayDidPressSecondaryAction;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithContext:(id)context invitedToSpeak:(_Bool)speak shouldJoin:(_Bool)join isRecording:(_Bool)recording;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (void)didTapConfirm;
- (void)didTapCancel;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* VoiceRoomReplaySpeakerConsentViewController_h */
