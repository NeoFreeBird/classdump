//
#ifndef _TtP19XFeatureSwitchesAPI20FeatureSwitchReading__Protocol_h
#define _TtP19XFeatureSwitchesAPI20FeatureSwitchReading__Protocol_h
@import Foundation;

@protocol XFeatureSwitchesAPI.FeatureSwitchReading

@required

/* required instance methods */
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

@optional

@end

#endif /* _TtP19XFeatureSwitchesAPI20FeatureSwitchReading__Protocol_h */
