//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVContextualMenuLayoutSpecs_h
#define PTVContextualMenuLayoutSpecs_h
@import Foundation;

@class NSObject;

@interface PTVContextualMenuLayoutSpecs : NSObject

/* class methods */
+ (double)AnimationDuration;
+ (double)AnimationDamping;
+ (double)AnimationInitialSpringVelocity;
+ (double)BackgroundOpacity;
+ (id)BackgroundColor;
+ (double)CornerRadius;
+ (double)TopDisplayedInset;
+ (double)TopHiddenInset;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ContentInsets;
+ (id)Font:(_Bool)font;
+ (id)SelectedBackgroundColor;
+ (id)SeparatorColor;
+ (id)DefaultColor;
+ (id)DestructiveColor;

@end

#endif /* PTVContextualMenuLayoutSpecs_h */
