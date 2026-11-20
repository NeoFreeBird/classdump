//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountUserDefaults_HealthUI_h
#define TFSAccountUserDefaults_HealthUI_h
@import Foundation;

@interface TFSAccountUserDefaults (HealthUI)

/* class methods */
+ (_Bool)hui_didDisplayGraduatedAccessNewUserPromptFor:(id)_for;
+ (_Bool)hui_didDisplayGraduatedAccessGraduatedPromptFor:(id)_for;
+ (void)hui_setGraduatedAccessNUXPromptWithValue:(_Bool)value for:(id)_for;
+ (void)hui_setGraduatedAccessNewUserPromptWithValue:(_Bool)value for:(id)_for;
+ (void)hui_setGraduatedAccessGraduatedPromptWithValue:(_Bool)value for:(id)_for;

@end

#endif /* TFSAccountUserDefaults_HealthUI_h */
