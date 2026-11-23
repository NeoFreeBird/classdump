//
#ifndef TFNDualPhaseCircularProgressViewDataSource_Protocol_h
#define TFNDualPhaseCircularProgressViewDataSource_Protocol_h
@import Foundation;

@protocol TFNDualPhaseCircularProgressViewDataSource

@required

/* required instance methods */
- (long long)currentCharacterCountFor:(id)_for;
- (long long)initialPhaseLimitFor:(id)_for;
- (long long)initialPhaseWarningCountFor:(id)_for;
- (long long)maximumCharacterLimitFor:(id)_for;
- (long long)maximumCharacterWarningCountFor:(id)_for;

@optional

@end

#endif /* TFNDualPhaseCircularProgressViewDataSource_Protocol_h */
