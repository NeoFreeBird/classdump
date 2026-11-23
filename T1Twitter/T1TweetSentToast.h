//
#ifndef T1TweetSentToast_h
#define T1TweetSentToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSArray, NSObject, NSString, TFNToastAction, TFNToastScribeContext, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterCommunityReference, UIColor, UIImage, UIView;

@interface T1TweetSentToast : NSObject <TFNToastViewModel>

@property (retain, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (nonatomic) unsigned long long sendCount;
@property (retain, nonatomic) TFNToastAction *primaryAction;
@property (retain, nonatomic) TFNToastAction *alternateAction;
@property (retain, nonatomic) TFNToastScribeContext *scribeContext;
@property (nonatomic) _Bool isStatusEditCreationEnabled;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) NSString *tweetText;
@property (readonly, copy, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSArray *messageTextBoldRanges;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSArray *detailTextBoldRanges;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, nonatomic) UIColor *iconColor;
@property (readonly, nonatomic) id /* block */ iconAccessoryViewProvider;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) UIView *thumbnailOverlayView;
@property (readonly, nonatomic) _Bool shouldAnimateAlternateActionButton;
@property (readonly, nonatomic) id /* block */ dismissCompletionHandler;
@property (readonly, nonatomic) double displayDuration;
@property (readonly, nonatomic) long long hapticFeedbackType;
@property (readonly, nonatomic) UIView *customBottomView;
@property (readonly, nonatomic) double minimizedToastMaximumHeight;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatus:(id)status communityReference:(id)reference sendCount:(unsigned long long)count isStatusEditCreationEnabled:(_Bool)enabled account:(id)account tweetText:(id)text presentingViewController:(id)controller;
- (void)_t1_calculateMessageTextAndBoldRanges;
- (unsigned long long)_t1_editWindowMinutes;
- (id /* block */)_makeNavigateToTweetHandler;
- (id /* block */)_makeNavigateToQuickPromoteTweetHandler;
- (_Bool)_isQuickPromoteEligible;

@end

#endif /* T1TweetSentToast_h */
