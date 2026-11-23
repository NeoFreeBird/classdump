//
#ifndef T1SensitiveMediaInterstitial_h
#define T1SensitiveMediaInterstitial_h
@import Foundation;

@class NSObject;

@interface T1SensitiveMediaInterstitial : NSObject // (Swift)

/* class methods */
+ (_Bool)requiresAgeVerificationToRevealWithAccount:(id)account imageInterstitial:(id)interstitial store:(id)store;
+ (_Bool)shouldRevealWithAccount:(id)account imageInterstitial:(id)interstitial store:(id)store;

/* instance methods */
- (id)init;

@end

#endif /* T1SensitiveMediaInterstitial_h */
