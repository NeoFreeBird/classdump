//
#ifndef TCRComposerThreadViewController_h
#define TCRComposerThreadViewController_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TUITweetAudienceSelectionModel.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_TtP15TwitterComposer23ComposerThreadContainer_-Protocol.h"
#include "_TtP15TwitterComposer39TweetComposeTableViewControllerDelegate_-Protocol.h"
#include "_TtP15TwitterComposer45TweetComposeSingleTweetViewControllerProtocol_-Protocol.h"

@class NSArray, UIScrollView, UIView, UIViewController;

@interface TCRComposerThreadViewController : UIViewController <UIScrollViewDelegate, TwitterComposer.ComposerThreadContainer> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 presenter;
    @40@0:8:16@24@32 delegateAdapter;
    @40@0:8:16@24@32 replyContextController;
    @40@0:8:16@24@32 heightLayout;
    @40@0:8:16@24@32 $__lazy_storage_$_scrollView;
    @40@0:8:16@24@32 $__lazy_storage_$_containerStack;
    @40@0:8:16@24@32 $__lazy_storage_$_headerBackgroundView;
    @40@0:8:16@24@32 $__lazy_storage_$_threadConnectorLine;
    @40@0:8:16@24@32 $__lazy_storage_$_longPressRecognizer;
    @40@0:8:16@24@32 $__lazy_storage_$_singleTapRecognizer;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, retain) id <TwitterComposer.TweetComposeTableViewControllerDelegate> delegate;
@property (nonatomic, copy) NSArray *compositions;
@property (nonatomic) _Bool loadedCompositionFromDrafts;
@property (nonatomic, retain) TUITweetAudienceSelectionModel *tweetAudienceSelectionModel;
@property (nonatomic) double visibleContentBottom;
@property (nonatomic, retain) UIView *addToThreadFooterView;
@property (nonatomic, readonly) UIScrollView *threadScrollView;
@property (nonatomic) _Bool threadScrollingEnabled;
@property (nonatomic, readonly) unsigned long long numberOfTweets;
@property (nonatomic, readonly) UIViewController<TwitterComposer.TweetComposeSingleTweetViewControllerProtocol> *activeTweetViewController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (nonatomic, readonly) long long replyContextViewState;
@property (nonatomic, readonly) UIView *selectedAudienceViewIfVisible;

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (id)initWithAccount:(id)account tweetAudienceSelectionModel:(id)model scribeContext:(id)context delegate:(id)delegate compositions:(id)compositions isReplystormEnabled:(_Bool)enabled seamProviders:(id)providers;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)addEmptyTweetToTweetstorm;
- (void)switchToPreviewMode;
- (void)updateTweetAudienceSelectionModelsForAccount:(id)account;
- (id)compositionsWithGeotagInfoForActiveGeoButton:(_Bool)button;
- (void)scrollFooterToVisibleAnimated:(_Bool)animated;
- (void)scrollCaretIntoVisibleContentAnimated:(_Bool)animated;
- (_Bool)tweetsAreBeingPreviewed;
- (_Bool)tweetsAreWorthSaving;
- (_Bool)tweetsAreWorthSending;
- (_Bool)hasNoPollOrValidPoll:(id *)poll;
- (id)pollImageUploadInfo;
- (void)handleLongPress:(id)press;
- (void)handleSingleTap:(id)tap;
- (void)updateGeoPermission:(id)permission;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TCRComposerThreadViewController_h */
