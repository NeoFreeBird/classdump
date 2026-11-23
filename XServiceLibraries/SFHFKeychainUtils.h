//
#ifndef SFHFKeychainUtils_h
#define SFHFKeychainUtils_h
@import Foundation;

@class NSObject;

@interface SFHFKeychainUtils : NSObject

/* class methods */
+ (id)loggingChannel;
+ (id)getPasswordForUsername:(id)username andServiceName:(id)name accessGroup:(id)group error:(id *)error;
+ (_Bool)storeUsername:(id)username andPassword:(id)password forServiceName:(id)name accessGroup:(id)group updateExisting:(_Bool)existing error:(id *)error;
+ (_Bool)deleteItemForUsername:(id)username andServiceName:(id)name accessGroup:(id)group error:(id *)error;

@end

#endif /* SFHFKeychainUtils_h */
