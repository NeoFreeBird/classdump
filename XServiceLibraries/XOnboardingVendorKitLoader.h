//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XOnboardingVendorKitLoader_h
#define XOnboardingVendorKitLoader_h
@import Foundation;

@class NSObject;

@interface XOnboardingVendorKitLoader : NSObject // (Swift)

/* class methods */
+ (id /* block */)castleConfigurator;
+ (void)setCastleConfigurator:(id /* block */)configurator;
+ (id)kit;
+ (void)prepare;
+ (id)createCastleRequestToken;

/* instance methods */
- (id)init;

@end

#endif /* XOnboardingVendorKitLoader_h */
