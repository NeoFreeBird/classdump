//
#ifndef Subsystem_ios_iosArm64_mainDmLocalStorageRepository_Protocol_h
#define Subsystem_ios_iosArm64_mainDmLocalStorageRepository_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDmLocalStorageRepository

@required

/* required instance methods */
- (void)deleteAllMedia;
- (id)observeEvictionPolicy;
- (id)observeStorageInfo;
- (id)observeStorageUsedByConversationLimit:(long long)limit;
- (id)observeStorageUsedByConversationLimit:(long long)limit;
- (void)setEvictionPolicyAndEvictPolicy:(id)policy;
- (void)setEvictionPolicyAndEvictPolicy:(id)policy;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmLocalStorageRepository_Protocol_h */
