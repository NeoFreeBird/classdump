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
