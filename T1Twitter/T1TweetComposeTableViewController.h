//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetComposeTableViewController_h
#define T1TweetComposeTableViewController_h
@import Foundation;

#include "T1TweetComposeReplyContextViewController.h"
#include "T1TweetComposeSingleTweetViewController.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "_TtP15TwitterComposer21ComposerSeamProviders_-Protocol.h"
#include "_TtP15TwitterComposer23ComposerThreadContainer_-Protocol.h"
#include "_TtP15TwitterComposer39TweetComposeTableViewControllerDelegate_-Protocol.h"
#include "_TtP15TwitterComposer45TweetComposeSingleTweetViewControllerDelegate_-Protocol.h"
#include "_TtP15TwitterComposer46TweetComposeReplyContextViewControllerDelegate_-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, TCRTweetComposeTableView, TFNTwitterAccount, TFSMainThreadRunLoopDeferredTask, TFSTwitterScribeContext, TUITweetAudienceSelectionModel, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, UIViewController;

@interface T1TweetComposeTableViewController : UIViewController <TwitterComposer.ComposerThreadContainer, TwitterComposer.TweetComposeSingleTweetViewControllerDelegate, TwitterComposer.TweetComposeReplyContextViewControllerDelegate, TFNLayoutMetricsEnvironment, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) long long activeTweetIndex;
@property (retain, nonatomic) UIView *headerBackgroundView;
@property (retain, nonatomic) UIView *headerBackgroundBorderView;
@property (retain, nonatomic) TCRTweetComposeTableView *tableView;
@property (nonatomic) _Bool didLoadLatestTweets;
@property (retain, nonatomic) T1TweetComposeReplyContextViewController *replyContextViewController;
@property (retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentScrollToCursorTask;
@property (weak, nonatomic) id <TwitterComposer.TweetComposeTableViewControllerDelegate> delegate;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (nonatomic) long long replyContextViewState;
@property (nonatomic) _Bool isReplystormEnabled;
@property (retain, nonatomic) id <TwitterComposer.ComposerSeamProviders> seamProviders;
@property (nonatomic) _Bool needsSynchronousActivation;
@property (nonatomic) double measuredRowContentWidth;
@property (nonatomic) _Bool measuresRowsAtContentWidth;
@property (nonatomic) _Bool timelineCarouselEnabled;
@property (readonly, nonatomic) NSMutableArray *singleTweetControllers;
@property (readonly, nonatomic) NSMapTable *composeTableCells;
@property (readonly, nonatomic) unsigned long long numberOfTweets;
@property (copy, nonatomic) NSArray *compositions;
@property (nonatomic) _Bool loadedCompositionFromDrafts;
@property (nonatomic) _Bool activatesSynchronously;
@property (nonatomic) _Bool stagedForMorph;
@property (readonly, nonatomic) UIView *replyContextTextView;
@property (readonly, nonatomic) _Bool hasAppliedRepliedToStatus;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (retain, nonatomic) TUITweetAudienceSelectionModel *tweetAudienceSelectionModel;
@property (readonly, nonatomic) T1TweetComposeSingleTweetViewController *activeTweetViewController;
@property (nonatomic) double visibleContentBottom;
@property (nonatomic) double anticipatedKeyboardOverlap;
@property (nonatomic) double caretBottomBreathingRoom;
@property (nonatomic) double contentLeadingOffset;
@property (retain, nonatomic) UIView *addToThreadFooterView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) UIView *selectedAudienceViewIfVisible;
@property (readonly, nonatomic) UIScrollView *threadScrollView;
@property (nonatomic) _Bool threadScrollingEnabled;
@property (readonly, nonatomic) _Bool isCommunityRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithAccount:(id)account tweetAudienceSelectionModel:(id)model scribeContext:(id)context delegate:(id)delegate compositions:(id)compositions isReplystormEnabled:(_Bool)enabled seamProviders:(id)providers;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)compositionsWithGeotagInfoForActiveGeoButton:(_Bool)button;
- (void)_t1_updateContextController;
- (long long)_t1_initialCompositionSelectionIndex;
- (void)addEmptyTweetToTweetstorm;
- (void)_t1_removeSingleTweetControllerFromTweetstorm:(id)tweetstorm;
- (void)_t1_addSingleTweetControllersForCompositions:(id)compositions;
- (void)_t1_addSingleTweetControllersForCompositions:(id)compositions startingAtIndex:(long long)index;
- (void)_t1_updateSingleTweetController:(id)controller withExpectedIndex:(long long)index expectedTweetCount:(long long)count;
- (void)_t1_didChangeSingleTweetControllers;
- (void)_t1_didLongPress:(id)press;
- (void)_t1_didSingleTap:(id)tap;
- (void)scrollViewDidScroll:(id)scroll;
- (_Bool)_t1_isReplyContextViewBeingRevealed;
- (double)_t1_replyContextViewRevealedHeight;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)_t1_scrollToActiveTweet;
- (void)_t1_scrollToActiveTweetWithAnimations:(id /* block */)animations;
- (void)_t1_scrollToCursorWithAnimations:(id /* block */)animations;
- (void)revealCaret;
- (double)_t1_caretRevealingContentOffsetY;
- (void)_t1_updateKeyboardDismissMode;
- (void)_t1_updateViewState;
- (_Bool)tweetsAreBeingPreviewed;
- (_Bool)tweetsAreWorthSaving;
- (_Bool)tweetsAreWorthSending;
- (long long)_t1_indexForSingleTweetViewController:(id)controller;
- (void)_t1_activateSingleTweetViewController:(id)controller;
- (_Bool)_t1_isValidIndex:(long long)index;
- (void)updateTweetAudienceSelectionModelsForAccount:(id)account;
- (void)_t1_copyAudienceFromComposition:(id)composition toComposition:(id)composition;
- (_Bool)_t1_isRootExclusive;
- (void)_t1_recalculateAudienceModelsFromIndex:(unsigned long long)index;
- (void)viewDidLayoutSubviews;
- (void)_t1_invalidateRowHeightsIfContentWidthChanged;
- (void)_t1_completeSynchronousActivationIfNeeded;
- (double)_t1_replyContextHeight;
- (void)_t1_layoutReplyContextView;
- (void)_t1_layoutHeaderBackgroundView;
- (void)_t1_updateContentInsets;
- (void)scrollFooterToVisibleAnimated:(_Bool)animated;
- (void)scrollCaretIntoVisibleContentAnimated:(_Bool)animated;
- (void)_t1_updateCalloutFooter;
- (void)_t1_updateReplyContextViewState;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)_t1_updateGeoPermission:(id)permission;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)_t1_rowContentWidthInTableView:(id)view;
- (_Bool)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)replyContextViewController:(id)controller didUpdateRepliedToStatus:(id)status;
- (void)singleTweetViewControllerDidChange:(id)change;
- (void)singleTweetViewControllerDidChangeAudience:(id)audience;
- (void)singleTweetViewControllerDidTapOnTweet:(id)tweet;
- (void)singleTweetViewControllerDidTapRemoveTweetButton:(id)button;
- (void)singleTweetViewController:(id)controller didSwitchToAccount:(id)account;
- (void)singleTweetViewControllerDidBecomeFirstResponder:(id)responder;
- (void)switchToPreviewMode;
- (void)singleTweetViewController:(id)controller tweetTextDidChange:(id)change;
- (void)singleTweetViewController:(id)controller didAddAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didRemoveAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didUpdateFromOldAttachments:(id)attachments;
- (void)singleTweetViewController:(id)controller didTapAttachment:(id)attachment startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (void)singleTweetViewController:(id)controller didTapAltTextForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapSensitiveWarningForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapLivePhotoToggleButtonForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller registerView:(id)view forTooltipIdentifier:(id)identifier;
- (void)singleTweetViewController:(id)controller didShowCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didShowVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didShowCashTagPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveCashTagPreview:(id)preview;
- (void)singleTweetViewControllerDidShowQuotedStatus:(id)status;
- (void)singleTweetViewControllerDidRemoveQuotedStatus:(id)status;
- (void)singleTweetViewController:(id)controller didAddPollCard:(id)card;
- (void)singleTweetViewController:(id)controller didBeginEditingPollCard:(id)card;
- (void)singleTweetViewController:(id)controller didRemovePollCard:(id)card;
- (void)singleTweetViewController:(id)controller didChangePollCard:(id)card;
- (void)singleTweetViewControllerDidTapGeoButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoSearchButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoButtonWithPlace:(id)place;
- (void)singleTweetViewControllerDidUpdatePlaceSelectionSupport:(id)support;
- (void)singleTweetViewControllerDidChangeSelectedPlace:(id)place;
- (void)singleTweetViewControllerDragStateDidChange:(id)change;
- (void)singleTweetViewController:(id)controller didUpdateMarkupTypesSelection:(id)selection;
- (void)singleTweetViewController:(id)controller didToggleMarkupTypes:(id)types;
- (void)singleTweetViewController:(id)controller didUpdateGrokImagineSessionState:(id)state;
- (void)singleTweetViewControllerDidChangeGrokImaginePostURLDownloadingState:(id)state;
- (void)singleTweetViewControllerWillOpenPaywall:(id)paywall;
- (void)singleTweetViewControllerUndoRedoStateDidChange:(id)change;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForAccessoryView;
- (_Bool)attachmentsShouldAllowMixedMedia;
- (unsigned long long)attachmentsMaxNumberOfMediaItems;
- (_Bool)hasNoPollOrValidPoll:(id *)poll;
- (id)pollImageUploadInfo;
- (_Bool)isStagedForMorph;

@end

#endif /* T1TweetComposeTableViewController_h */
