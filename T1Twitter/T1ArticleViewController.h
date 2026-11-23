//
#ifndef T1ArticleViewController_h
#define T1ArticleViewController_h
@import Foundation;

#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TTAStatusInlineActionsViewDelegate-Protocol.h"

@class TFNViewController;

@interface T1ArticleViewController : TFNViewController <TFNJumpBackToHomeTimelineBehavior, TTAStatusInlineActionsViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *status;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *articleStatusID;
    NSNumber"16@0:8 *bodyFactory;
    NSNumber"16@0:8 *bodyLoadState;
    NSNumber"16@0:8 *bodyResolutionTask;
    NSNumber"16@0:8 *$__lazy_storage_$_headerView;
    NSNumber"16@0:8 *$__lazy_storage_$_floatingActionBar;
    NSNumber"16@0:8 *$__lazy_storage_$_floatingBarCollapseController;
    NSNumber"16@0:8 *$__lazy_storage_$_actionHandler;
    NSNumber"16@0:8 *scribeImpressionStartTime;
    NSNumber"16@0:8 *didLogImpression;
    NSNumber"16@0:8 *didShowFloatingBar;
    NSNumber"16@0:8 *viewDidAppear;
    NSNumber"16@0:8 *lingerScriber;
    NSNumber"16@0:8 *loadingSpinner;
    NSNumber"16@0:8 *skeletonView;
    NSNumber"16@0:8 *isOnRootArticlePage;
    NSNumber"16@0:8 *usesSystemNavigationBar;
    NSNumber"16@0:8 *$__lazy_storage_$_grokSummaryBarButtonItem;
    NSNumber"16@0:8 *$__lazy_storage_$_articlePageBackBarButtonItem;
    NSNumber"16@0:8 *playbackObserver;
    NSNumber"16@0:8 *isAudioArticle;
    NSNumber"16@0:8 *isGrokSummarySupported;
    NSNumber"16@0:8 *isReaderCoverSizingDisabled;
    NSNumber"16@0:8 *activityRecorder;
}

@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;

/* instance methods */
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (id)initWithAccount:(id)account status:(id)status username:(id)username statusID:(id)id fallbackURL:(id)url;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)applicationDidBecomeActive:(id)active;
- (void)articlePageBackTapped;
- (void)grokSummaryTapped;
- (id)scribePage;
- (id)scribeComponent;
- (_Bool)isPresentingArticleForStatusID:(id)id;
- (void)statusUpdatedWithNotification:(id)notification;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ArticleViewController_h */
