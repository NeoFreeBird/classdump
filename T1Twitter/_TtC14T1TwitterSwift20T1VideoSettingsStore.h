//
#ifndef _TtC14T1TwitterSwift20T1VideoSettingsStore_h
#define _TtC14T1TwitterSwift20T1VideoSettingsStore_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.T1VideoSettingsStore : NSObject // (Swift)

@property (nonatomic) _Bool isCCToggleEnabled;

/* class methods */
+ (id)shared;
+ (_Bool)isCCToggleEnabledDefaultValue;
+ (void)setIsCCToggleEnabledDefaultValue:(_Bool)value;

/* instance methods */
- (void)deleteUserDefaultsValues;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20T1VideoSettingsStore_h */
