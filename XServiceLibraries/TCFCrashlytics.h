//
#ifndef TCFCrashlytics_h
#define TCFCrashlytics_h
@import Foundation;

@class NSObject;

@interface TCFCrashlytics : NSObject

/* class methods */
+ (id)sharedInstance;
+ (_Bool)isStarted;
+ (void)startWithConfigurationFilePrefix:(id)prefix;

/* instance methods */
- (void)setUserName:(id)name;
- (void)setUserID:(id)id;
- (void)setCustomValue:(id)value forKey:(id)key;
- (void)setCustomKeysAndValues:(id)values;
- (void)recordError:(id)error;
- (void)recordError:(id)error userInfo:(id)info;
- (void)recordNonFatalErrorWithName:(id)name reason:(id)reason stackFrameAddresses:(id)addresses;
- (_Bool)didCrashDuringPreviousExecution;

@end

#endif /* TCFCrashlytics_h */
