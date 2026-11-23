//
#ifndef TFNTwitterAccountFeatureSwitchCompute_h
#define TFNTwitterAccountFeatureSwitchCompute_h
@import Foundation;

@class NSObject;

@interface TFNTwitterAccountFeatureSwitchCompute : NSObject // (Swift)

/* class methods */
+ (id)xorDeobfuscate:(id)deobfuscate key:(unsigned char)key;
+ (_Bool)isStampRallyEnabledFeatureSwitchValue:(id)value;
+ (_Bool)isDummyTest1EnabledFeatureSwitchValue:(id)value;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterAccountFeatureSwitchCompute_h */
