//
#ifndef TFNApplicationWithEffectiveStatusBarOrientationSupport_Protocol_h
#define TFNApplicationWithEffectiveStatusBarOrientationSupport_Protocol_h
@import Foundation;

@protocol TFNApplicationWithEffectiveStatusBarOrientationSupport

@required

/* required instance methods */
- (void)tfn_performWithEffectiveStatusBarOrientation:(long long)orientation block:(id /* block */)block;
- (void)tfn_performWithEffectiveStatusBarOrientation:(long long)orientation block:(id /* block */)block;

@optional

@end

#endif /* TFNApplicationWithEffectiveStatusBarOrientationSupport_Protocol_h */
