//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCallNotifyFollowersView_h
#define PTVGuestCallNotifyFollowersView_h
@import Foundation;

#include "PTVGuestCallNotifyFollowersViewDelegate-Protocol.h"

@class UIButton, UIImpactFeedbackGenerator;

@interface PTVGuestCallNotifyFollowersView : UIButton

@property (weak, nonatomic) id <PTVGuestCallNotifyFollowersViewDelegate> delegate;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator;

/* class methods */
+ (double)CalculateHeight;
+ (id)NotifyTitle;
+ (id)DoNotNotifyTitle;
+ (id)NotifyImage;
+ (id)DoNotNotifyImage;
+ (id)ButtonColor;
+ (id)ButtonFont;

/* instance methods */
- (id)initWithDelegate:(id)delegate shouldNotifyFollowers:(_Bool)followers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)handleTap;

@end

#endif /* PTVGuestCallNotifyFollowersView_h */
