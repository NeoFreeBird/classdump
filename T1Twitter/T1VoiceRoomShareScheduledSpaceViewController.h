//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomShareScheduledSpaceViewController_h
#define T1VoiceRoomShareScheduledSpaceViewController_h
@import Foundation;

#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class TFNViewController;

@interface T1VoiceRoomShareScheduledSpaceViewController : TFNViewController <TUICardViewDelegate, TFNModalSheetViewControllerLayoutDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *$__lazy_storage_$_containerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_spaceCard;
    NSNumber"16@0:8 *buttonStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_tweetButtonView;
    NSNumber"16@0:8 *$__lazy_storage_$_dmButtonView;
    NSNumber"16@0:8 *$__lazy_storage_$_copyLinkButtonView;
    NSNumber"16@0:8 *$__lazy_storage_$_shareViaButtonView;
    NSNumber"16@0:8 *$__lazy_storage_$_closeBarButtonItem;
    NSNumber"16@0:8 *spaceModel;
    NSNumber"16@0:8 *customDismissalBlock;
    NSNumber"16@0:8 *$__lazy_storage_$_editFooterButton;
}

/* instance methods */
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)cardView:(id)view didUpdateContentAnimated:(_Bool)animated;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithViewModel:(id)model customDismissalBlock:(id /* block */)block;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (void)didTapTweetButton;
- (void)didTapDMButton;
- (void)didTapCopyLinkButton;
- (void)didTapShareViaButton;
- (void)didTapCloseButton;
- (void)didTapEditButton;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomShareScheduledSpaceViewController_h */
