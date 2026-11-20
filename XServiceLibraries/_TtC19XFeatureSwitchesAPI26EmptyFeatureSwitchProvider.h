//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19XFeatureSwitchesAPI26EmptyFeatureSwitchProvider_h
#define _TtC19XFeatureSwitchesAPI26EmptyFeatureSwitchProvider_h
@import Foundation;

#include "_TtP19XFeatureSwitchesAPI20FeatureSwitchReading_-Protocol.h"

@class NSObject;

@interface XFeatureSwitchesAPI.EmptyFeatureSwitchProvider : NSObject <XFeatureSwitchesAPI.FeatureSwitchReading> // (Swift)

/* class methods */
+ (id)shared;

/* instance methods */
- (_Bool)boolForKey:(id)key;
- (_Bool)boolForKey:(id)key defaultValue:(_Bool)value;
- (long long)integerForKey:(id)key;
- (long long)integerForKey:(id)key defaultValue:(long long)value;
- (double)doubleForKey:(id)key;
- (double)doubleForKey:(id)key defaultValue:(double)value;
- (id)numberForKey:(id)key;
- (id)numberForKey:(id)key defaultValue:(id)value;
- (id)stringForKey:(id)key;
- (id)stringForKey:(id)key defaultValue:(id)value;
- (id)arrayForKey:(id)key;
- (id)arrayForKey:(id)key defaultValue:(id)value;
- (id)setForKey:(id)key;
- (id)setForKey:(id)key defaultValue:(id)value;
- (_Bool)isInExperimentForKey:(id)key;
- (id)init;

@end

#endif /* _TtC19XFeatureSwitchesAPI26EmptyFeatureSwitchProvider_h */
