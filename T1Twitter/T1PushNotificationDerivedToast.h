//
#ifndef T1PushNotificationDerivedToast_h
#define T1PushNotificationDerivedToast_h
@import Foundation;

#include "T1HydratedPushNotificationPayload.h"
#include "T1PushNotificationRoute-Protocol.h"
#include "T1PushNotificationRouteAppContext.h"
#include "TFNToastViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSObject, NSString, TFNToastAction, TFNToastScribeContext, UIColor, UIImage, UIView;

@interface T1PushNotificationDerivedToast : NSObject <TFNToastViewModel>

@property (copy, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSArray *messageTextBoldRanges;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) _Bool isDetailTextDuplicateOfMessageText;
@property (retain, nonatomic) UIImage *grokBotAvatarImage;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (copy, nonatomic) id /* block */ iconAccessoryViewProvider;
@property (retain, nonatomic) TFNToastAction *primaryAction;
@property (retain, nonatomic) TFNToastScribeContext *scribeContext;
@property (readonly, nonatomic) T1HydratedPushNotificationPayload *hydratedPayload;
@property (readonly, nonatomic) T1PushNotificationRouteAppContext *routeContext;
@property (readonly, nonatomic) id <T1PushNotificationRoute> route;
@property (readonly, nonatomic) NSString *directMessageConversationID;
@property (readonly, nonatomic) NSArray *detailTextBoldRanges;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIColor *iconColor;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) UIView *thumbnailOverlayView;
@property (readonly, nonatomic) _Bool shouldAnimateAlternateActionButton;
@property (readonly, nonatomic) TFNToastAction *alternateAction;
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

/* class methods */
+ (void)toastForPayload:(id)payload routeContext:(id)context route:(id)route completion:(id /* block */)completion;
+ (id)_t1_toastMessageAndBoldRangesForSupportedHydratedPayload:(id)payload;

/* instance methods */
- (id)initWithHydratedPayload:(id)payload routeContext:(id)context route:(id)route;
- (void)_t1_dockImmersiveVideoIfNeeded;

@end

#endif /* T1PushNotificationDerivedToast_h */
