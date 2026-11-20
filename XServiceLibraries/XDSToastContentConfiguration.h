//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSToastContentConfiguration_h
#define XDSToastContentConfiguration_h
@import Foundation;

@class NSArray, NSObject, NSString, UIColor, UIImage, UIView;

@interface XDSToastContentConfiguration : NSObject // (Swift)

@property (nonatomic, copy) NSString *messageText;
@property (nonatomic, copy) NSArray *messageBoldRanges;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSArray *detailBoldRanges;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (nonatomic, retain) UIView *thumbnailOverlayView;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIColor *iconTintColor;
@property (nonatomic) _Bool showsSocialDMIcon;
@property (nonatomic, copy) id /* block */ iconAccessoryViewProvider;
@property (nonatomic, copy) NSString *alternateActionTitle;
@property (nonatomic, copy) id /* block */ alternateActionHandler;
@property (nonatomic, copy) id /* block */ primaryActionHandler;

/* instance methods */
- (id)init;

@end

#endif /* XDSToastContentConfiguration_h */
