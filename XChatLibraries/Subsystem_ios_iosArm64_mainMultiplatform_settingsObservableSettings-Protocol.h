//
#ifndef Subsystem_ios_iosArm64_mainMultiplatform_settingsObservableSettings_Protocol_h
#define Subsystem_ios_iosArm64_mainMultiplatform_settingsObservableSettings_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainMultiplatform_settingsSettings-Protocol.h"

@protocol Subsystem_ios_iosArm64_mainMultiplatform_settingsObservableSettings <Subsystem_ios_iosArm64_mainMultiplatform_settingsSettings>

@required

/* required instance methods */
- (id)addBooleanListenerKey:(id)key defaultValue:(_Bool)value callback:(id /* block */)callback;
- (id)addBooleanListenerKey:(id)key defaultValue:(_Bool)value callback:(id /* block */)callback;
- (id)addBooleanOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addBooleanOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addDoubleListenerKey:(id)key defaultValue:(double)value callback:(id /* block */)callback;
- (id)addDoubleListenerKey:(id)key defaultValue:(double)value callback:(id /* block */)callback;
- (id)addDoubleOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addDoubleOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addFloatListenerKey:(id)key defaultValue:(float)value callback:(id /* block */)callback;
- (id)addFloatListenerKey:(id)key defaultValue:(float)value callback:(id /* block */)callback;
- (id)addFloatOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addFloatOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addIntListenerKey:(id)key defaultValue:(int)value callback:(id /* block */)callback;
- (id)addIntListenerKey:(id)key defaultValue:(int)value callback:(id /* block */)callback;
- (id)addIntOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addIntOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addLongListenerKey:(id)key defaultValue:(long long)value callback:(id /* block */)callback;
- (id)addLongListenerKey:(id)key defaultValue:(long long)value callback:(id /* block */)callback;
- (id)addLongOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addLongOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addStringListenerKey:(id)key defaultValue:(id)value callback:(id /* block */)callback;
- (id)addStringListenerKey:(id)key defaultValue:(id)value callback:(id /* block */)callback;
- (id)addStringOrNullListenerKey:(id)key callback:(id /* block */)callback;
- (id)addStringOrNullListenerKey:(id)key callback:(id /* block */)callback;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMultiplatform_settingsObservableSettings_Protocol_h */
