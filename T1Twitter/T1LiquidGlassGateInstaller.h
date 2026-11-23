//
#ifndef T1LiquidGlassGateInstaller_h
#define T1LiquidGlassGateInstaller_h
@import Foundation;

@class NSObject;

@interface T1LiquidGlassGateInstaller : NSObject // (Swift)

/* class methods */
+ (void)installGateForAccount:(id)account;
+ (id)scribeStateForAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1LiquidGlassGateInstaller_h */
