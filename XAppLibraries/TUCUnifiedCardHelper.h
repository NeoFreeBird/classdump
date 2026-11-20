//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
