//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSShareKitContext_h
#define TSShareKitContext_h
@import Foundation;

@class NSObject;

@interface TSShareKitContext : NSObject // (Swift)

/* class methods */
+ (void)configureWithAccount:(id)account featureSwitchProvider:(id)provider;

/* instance methods */
- (id)init;

@end

#endif /* TSShareKitContext_h */
