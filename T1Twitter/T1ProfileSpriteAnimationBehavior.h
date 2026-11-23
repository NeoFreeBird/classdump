//
#ifndef T1ProfileSpriteAnimationBehavior_h
#define T1ProfileSpriteAnimationBehavior_h
@import Foundation;

@class NSDictionary, NSObject, ProfileBirthdayBalloons, TFNTwitterAccount, TFNViewController;

@interface T1ProfileSpriteAnimationBehavior : NSObject

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSDictionary *balloonOverrides;
@property (retain, nonatomic) ProfileBirthdayBalloons *balloons;
@property (nonatomic) unsigned long long waveCount;
@property (nonatomic) _Bool spriteAnimationStarted;
@property (weak, nonatomic) TFNViewController *controller;

/* instance methods */
- (id)initWithController:(id)controller account:(id)account;
- (id)init;
- (void)startSpriteAnimationsWithProfileViewModel:(id)model userDataVisible:(_Bool)visible forced:(_Bool)forced;
- (void)abortSpriteAnimations;
- (void)stopSpriteAnimations;
- (void)pauseSpriteAnimations;
- (void)resumeSpriteAnimationsWithProfileViewModel:(id)model;
- (void)_launchWaveWithOverrideColor:(id)color;
- (id)_balloonOverrideColorWithProfileViewModel:(id)model;
- (_Bool)_shouldShowBalloonsWithProfileViewModel:(id)model;

@end

#endif /* T1ProfileSpriteAnimationBehavior_h */
