//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP15TwitterComposer23ComposerThreadContainer__Protocol_h
#define _TtP15TwitterComposer23ComposerThreadContainer__Protocol_h
@import Foundation;

@class NSArray, TUITweetAudienceSelectionModel, UIScrollView, UIView, UIViewController;
@protocol TweetComposeSingleTweetViewControllerProtocol;

@protocol TwitterComposer.ComposerThreadContainer

@required

@property (readonly, nonatomic) unsigned long long numberOfTweets;
@property (copy, nonatomic) NSArray *compositions;
@property (nonatomic) _Bool loadedCompositionFromDrafts;
@property (retain, nonatomic) TUITweetAudienceSelectionModel *tweetAudienceSelectionModel;
@property (readonly, nonatomic) UIViewController<TweetComposeSingleTweetViewControllerProtocol> *activeTweetViewController;
@property (nonatomic) double visibleContentBottom;
@property (retain, nonatomic) UIView *addToThreadFooterView;
@property (readonly, nonatomic) UIScrollView *threadScrollView;
@property (nonatomic) _Bool threadScrollingEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) long long replyContextViewState;
@property (readonly, nonatomic) UIView *selectedAudienceViewIfVisible;

/* required instance methods */
- (void)scrollCaretIntoVisibleContentAnimated:(_Bool)animated;
- (void)updateTweetAudienceSelectionModelsForAccount:(id)account;
- (void)addEmptyTweetToTweetstorm;
- (void)switchToPreviewMode;
- (void)scrollFooterToVisibleAnimated:(_Bool)animated;
- (id)compositionsWithGeotagInfoForActiveGeoButton:(_Bool)button;
- (_Bool)tweetsAreBeingPreviewed;
- (_Bool)tweetsAreWorthSaving;
- (_Bool)tweetsAreWorthSending;
- (_Bool)hasNoPollOrValidPoll:(id *)poll;
- (id)pollImageUploadInfo;

@optional

@end

#endif /* _TtP15TwitterComposer23ComposerThreadContainer__Protocol_h */
