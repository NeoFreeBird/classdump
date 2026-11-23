//
#ifndef T1UndoTweetSentToast_h
#define T1UndoTweetSentToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSArray, NSObject, NSString, TFNToastAction, TFNToastScribeContext, TFNTwitterAccount, UIColor, UIImage, UIView;

@interface T1UndoTweetSentToast : NSObject <TFNToastViewModel>

@property (readonly, nonatomic) NSArray *compositions;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) _Bool didTapUndoButton;
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
@property (readonly, nonatomic) TFNToastAction *primaryAction;
@property (readonly, nonatomic) TFNToastAction *alternateAction;
@property (readonly, nonatomic) id /* block */ dismissCompletionHandler;
@property (readonly, nonatomic) double displayDuration;
@property (readonly, nonatomic) long long hapticFeedbackType;
@property (readonly, nonatomic) TFNToastScribeContext *scribeContext;
@property (readonly, nonatomic) UIView *customBottomView;
@property (readonly, nonatomic) double minimizedToastMaximumHeight;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompositions:(id)compositions account:(id)account;
- (void)_t1_calculateMessageTextAndBoldRanges;
- (void)_t1_didTapUndoButton;
- (void)_t1_toastDidComplete;

@end

#endif /* T1UndoTweetSentToast_h */
