//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerProtocol__Protocol_h
#define _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerProtocol__Protocol_h
@import Foundation;

@class TFNTwitterComposition, TFSTwitterPlace, UIView;
@protocol TweetComposeSingleTweetViewControllerTextView;

@protocol TwitterComposer.TweetComposeSingleTweetViewControllerProtocol

@required

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property (nonatomic) long long displayStyle;
@property (readonly, nonatomic) UIView *selectedAudienceViewIfVisible;
@property (readonly, nonatomic) id <TweetComposeSingleTweetViewControllerTextView> textView;
@property (nonatomic) _Bool shouldShowConnectingLine;
@property (nonatomic) _Bool isPartOfTweetstorm;
@property (nonatomic) _Bool isHeadOfTweetstorm;
@property (nonatomic) _Bool isPartOfReplystorm;
@property (nonatomic) _Bool isHeadOfReplystorm;
@property (nonatomic) _Bool isReplystormEnabled;
@property (nonatomic) _Bool isComposerRedesignEnabled;

/* required instance methods */
- (void)setDelegate:(id)delegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectInView:(id)view;
- (double)preferredHeightFittingWidth:(double)width;
- (id)geotaggedCompositionForActiveGeoButton:(_Bool)button;
- (void)prepareForActivation;
- (void)prepareForDeletion;
- (void)updatePlaceholderText;
- (void)refreshPreferredContentSize;
- (_Bool)isWorthSaving;
- (_Bool)isWorthSending;
- (_Bool)hasNoPollOrValidPoll:(id *)poll;
- (id)pollImageAssetsByChoiceIndex;
- (void)showMenu;
- (void)handleSingleTapOutsideBounds;
- (_Bool)isReply;
- (_Bool)hasText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameInView:(id)view;

@optional

@end

#endif /* _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerProtocol__Protocol_h */
