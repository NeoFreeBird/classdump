//
#ifndef MuteBlockUserToast_h
#define MuteBlockUserToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSArray, NSObject, NSString, TFNToastAction, TFNToastScribeContext, UIColor, UIImage, UIView;

@interface MuteBlockUserToast : NSObject <TFNToastViewModel>

@property (copy, nonatomic) NSString *messageText;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) TFNToastAction *alternateAction;
@property (readonly, nonatomic) NSArray *messageTextBoldRanges;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSArray *detailTextBoldRanges;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIColor *iconColor;
@property (readonly, nonatomic) id /* block */ iconAccessoryViewProvider;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) UIView *thumbnailOverlayView;
@property (readonly, nonatomic) _Bool shouldAnimateAlternateActionButton;
@property (readonly, nonatomic) TFNToastAction *primaryAction;
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

/* class methods */
+ (id)muteToastWithUserReference:(id)reference undoAction:(id /* block */)action;
+ (id)unmuteToastWithUserReference:(id)reference undoAction:(id /* block */)action;
+ (id)blockToastWithUserReference:(id)reference undoAction:(id /* block */)action;
+ (id)unblockToastWithUserReference:(id)reference undoAction:(id /* block */)action;

/* instance methods */
- (id)init;
- (id)initWithUserReference:(id)reference undoAction:(id /* block */)action;

@end

#endif /* MuteBlockUserToast_h */
