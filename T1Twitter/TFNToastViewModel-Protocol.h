//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNToastViewModel_Protocol_h
#define TFNToastViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSString, TFNToastAction, TFNToastScribeContext, UIColor, UIImage, UIView;

@protocol TFNToastViewModel <NSObject>

@required

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSArray *messageTextBoldRanges;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSArray *detailTextBoldRanges;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIColor *iconColor;
@property (nonatomic, readonly) id /* block */ iconAccessoryViewProvider;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) UIView *thumbnailOverlayView;
@property (nonatomic, readonly) _Bool shouldAnimateAlternateActionButton;
@property (nonatomic, readonly) TFNToastAction *primaryAction;
@property (nonatomic, readonly) TFNToastAction *alternateAction;
@property (nonatomic, readonly) id /* block */ dismissCompletionHandler;
@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) long long hapticFeedbackType;
@property (nonatomic, readonly) TFNToastScribeContext *scribeContext;
@property (nonatomic, readonly) UIView *customBottomView;
@property (nonatomic, readonly) double minimizedToastMaximumHeight;
@property (nonatomic, readonly) UIColor *backgroundColor;

@optional

/* optional instance methods */
- (id)customToastContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)customToastContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TFNToastViewModel_Protocol_h */
