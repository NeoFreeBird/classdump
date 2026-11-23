//
#ifndef TASVoiceRoomReplayNUXViewController_h
#define TASVoiceRoomReplayNUXViewController_h
@import Foundation;

#include "TASSpacesTrayContent-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface TASVoiceRoomReplayNUXViewController : TFNViewController <TFNAttributedTextViewDelegate, TASSpacesTrayContent, TFNModalSheetViewControllerLayoutDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 isHost;
    @40@0:8:16@24@32 completion;
    @40@0:8:16@24@32 iconSize;
    @40@0:8:16@24@32 recordingView;
    @40@0:8:16@24@32 $__lazy_storage_$_scrollView;
    @40@0:8:16@24@32 $__lazy_storage_$_titleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_subtitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_audienceIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_audienceTitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_audienceDescriptionLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_audienceStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_shareIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_shareTitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_shareDescriptionLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_shareStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_anyoneIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_anyoneTitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_anyoneDescriptionLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_anyoneStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_liveRecordingIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_liveRecordingTitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_liveRecordingDescriptionLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_liveRecordingStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_replayIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_replayTitleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_replayDescriptionLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_replayStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_detailsLabel;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;

/* class methods */
+ (void)presentNUXWithContext:(id)context isHost:(_Bool)host fromViewController:(id)controller completion:(id /* block */)completion;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)spacesTrayDidPressPrimaryAction;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithContext:(id)context isHost:(_Bool)host;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didTapConfirm;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TASVoiceRoomReplayNUXViewController_h */
