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
