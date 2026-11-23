//
#ifndef TFNAnimatedImageOverlayConfiguration_h
#define TFNAnimatedImageOverlayConfiguration_h
@import Foundation;

@class NSObject;

@interface TFNAnimatedImageOverlayConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 imageName;
    B24@0:8@"NSString"16 fillColor;
    B24@0:8@"NSString"16 constraintsBlock;
    B24@0:8@"NSString"16 imageHeight;
    B24@0:8@"NSString"16 shadowRadius;
    B24@0:8@"NSString"16 shadowOffset;
    B24@0:8@"NSString"16 shadowOpacity;
    B24@0:8@"NSString"16 animatedAlpha;
    B24@0:8@"NSString"16 initialTransform;
    B24@0:8@"NSString"16 animatedTransform;
    B24@0:8@"NSString"16 completionTransform;
    B24@0:8@"NSString"16 fadeInAnimationOptions;
    B24@0:8@"NSString"16 fadeOutAnimationOptions;
    B24@0:8@"NSString"16 fadeInAnimationDuration;
    B24@0:8@"NSString"16 fadeOutAnimationDuration;
    B24@0:8@"NSString"16 completionDelay;
    B24@0:8@"NSString"16 animationMidpointBlock;
}

/* instance methods */
- (id)initWithImageName:(id)name fillColor:(id)color constraintsBlock:(id /* block */)block;
- (id)init;

@end

#endif /* TFNAnimatedImageOverlayConfiguration_h */
