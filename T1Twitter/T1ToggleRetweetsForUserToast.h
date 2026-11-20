//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ToggleRetweetsForUserToast_h
#define T1ToggleRetweetsForUserToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSArray, NSObject, NSString, TFNToastAction, TFNToastScribeContext, TFNTwitterAccount, TFSTwitterUserReference, UIColor, UIImage, UIView, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1ToggleRetweetsForUserToast : NSObject <TFNToastViewModel>

@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) TFNToastAction *alternateAction;
@property (retain, nonatomic) TFSTwitterUserReference *userReference;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic) _Bool retweetsEnabled;
@property (nonatomic) _Bool showUndo;
@property (readonly, copy, nonatomic) NSString *messageText;
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
+ (id)retweetsEnabledToastWithUserReference:(id)reference account:(id)account promotedContent:(id)content showUndo:(_Bool)undo;
+ (id)retweetsDisabledToastWithUserReference:(id)reference account:(id)account promotedContent:(id)content showUndo:(_Bool)undo;

/* instance methods */
- (id)initWithUserReference:(id)reference account:(id)account promotedContent:(id)content retweetsEnabled:(_Bool)enabled showUndo:(_Bool)undo;

@end

#endif /* T1ToggleRetweetsForUserToast_h */
