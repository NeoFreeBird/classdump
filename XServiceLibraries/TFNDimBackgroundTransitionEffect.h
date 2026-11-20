//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDimBackgroundTransitionEffect_h
#define TFNDimBackgroundTransitionEffect_h
@import Foundation;

@class NSObject, UIView;

@interface TFNDimBackgroundTransitionEffect : NSObject

@property (readonly, nonatomic) UIView *presentingView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (nonatomic) double transitionPercentComplete;
@property (nonatomic) long long effectStyle;

/* instance methods */
- (id)initWithPresentingViewController:(id)controller;
- (id)initWithPresentingView:(id)view;
- (id)init;
- (void)dealloc;

@end

#endif /* TFNDimBackgroundTransitionEffect_h */
