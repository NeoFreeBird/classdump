//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveDockMorphAnimator_h
#define T1ImmersiveDockMorphAnimator_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveDockMorphAnimator : NSObject // (Swift)

/* class methods */
+ (_Bool)runMorphWithImmersiveContainerView:(id)view immersivePlayerView:(id)view videoAspectRatio:(double)ratio callbacks:(id)callbacks;
+ (void)crossFadeDismissModalsFrom:(id)from morphingView:(id)view inWindow:(id)window videoAspectRatio:(double)ratio isRTL:(_Bool)rtl;

/* instance methods */
- (id)init;

@end

#endif /* T1ImmersiveDockMorphAnimator_h */
