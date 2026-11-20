//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
