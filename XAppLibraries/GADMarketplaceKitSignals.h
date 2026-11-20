//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMarketplaceKitSignals_h
#define GADMarketplaceKitSignals_h
@import Foundation;

@class NSObject;

@interface GADMarketplaceKitSignals : NSObject // (Swift)

/* class methods */
+ (void)appDistributorWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;

@end

#endif /* GADMarketplaceKitSignals_h */
