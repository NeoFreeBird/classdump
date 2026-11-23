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
