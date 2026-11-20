//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
