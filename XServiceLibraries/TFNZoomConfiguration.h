//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNZoomConfiguration_h
#define TFNZoomConfiguration_h
@import Foundation;

@class NSObject, UIColor, UIView;
@protocol TFNMediaTransitionDelegate;

@interface TFNZoomConfiguration : NSObject

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, weak, nonatomic) id <TFNMediaTransitionDelegate> transitionDelegate;
@property (readonly, nonatomic) id object;

/* instance methods */
- (id)initWithView:(id)view backgroundColor:(id)color transitionDelegate:(id)delegate object:(id)object;

@end

#endif /* TFNZoomConfiguration_h */
