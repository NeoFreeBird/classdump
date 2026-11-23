//
#ifndef TUCUnifiedCardHelper_h
#define TUCUnifiedCardHelper_h
@import Foundation;

@class NSObject;

@interface TUCUnifiedCardHelper : NSObject // (Swift)

/* class methods */
+ (id)websiteCardCTAFor:(id)ctafor;
+ (_Bool)canShowWithVanityTitle:(id)title;

/* instance methods */
- (id)init;

@end

#endif /* TUCUnifiedCardHelper_h */
