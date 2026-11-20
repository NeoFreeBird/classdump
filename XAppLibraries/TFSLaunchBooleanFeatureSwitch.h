//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSLaunchBooleanFeatureSwitch_h
#define TFSLaunchBooleanFeatureSwitch_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSString;

@interface TFSLaunchBooleanFeatureSwitch : NSObject {
    /* instance variables */
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentRunValuesLock;
}

@property (readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (readonly, nonatomic) NSMutableDictionary *currentRunValues;
@property (readonly, nonatomic) _Bool defaultValue;

/* instance methods */
- (id)initWithUserDefaultsKey:(id)key defaultValue:(_Bool)value;
- (_Bool)isEnabledForCurrentLaunchWithAccountID:(id)id;
- (void)updateNextLaunchValueForAccountID:(id)id withReadBlock:(id /* block */)block;
- (long long)_tfs_enabledValueForCurrentLaunchWithAccountID:(id)id;

@end

#endif /* TFSLaunchBooleanFeatureSwitch_h */
