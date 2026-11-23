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
