//
#ifndef BRZUser_h
#define BRZUser_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSDate, NSObject, NSString;

@interface BRZUser : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift viewStore;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _id;
}

@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSDate *dateOfBirth;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *homeCity;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, copy) NSString *avatarImageURL;
@property (nonatomic, retain) id facebookUser;
@property (nonatomic, retain) id twitterUser;
@property (nonatomic, retain) id attributionData;
@property (nonatomic, copy) NSString *identifier;

/* instance methods */
- (void)setGender:(id)gender;
- (void)setEmailSubscriptionState:(long long)state;
- (void)setPushNotificationSubscriptionState:(long long)state;
- (void)addAlias:(id)alias label:(id)label;
- (void)setCustomAttributeWithKey:(id)key boolValue:(_Bool)value;
- (void)setCustomAttributeWithKey:(id)key doubleValue:(double)value;
- (void)setCustomAttributeWithKey:(id)key intValue:(long long)value;
- (void)setCustomAttributeWithKey:(id)key stringValue:(id)value;
- (void)setCustomAttributeWithKey:(id)key dateValue:(id)value;
- (void)unsetCustomAttributeWithKey:(id)key;
- (void)incrementCustomUserAttribute:(id)attribute;
- (void)incrementCustomUserAttribute:(id)attribute by:(long long)by;
- (void)addToCustomAttributeStringArrayWithKey:(id)key value:(id)value;
- (void)removeFromCustomAttributeStringArrayWithKey:(id)key value:(id)value;
- (void)setCustomAttributeArrayWithKey:(id)key array:(id)array;
- (void)setNestedCustomAttributeArrayWithKey:(id)key value:(id)value;
- (void)setNestedCustomAttributeDictionaryWithKey:(id)key value:(id)value;
- (void)setNestedCustomAttributeDictionaryWithKey:(id)key value:(id)value merge:(_Bool)merge;
- (void)setLastKnownLocationWithLatitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(double)accuracy;
- (void)setLastKnownLocationWithLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy;
- (void)setLocationCustomAttributeWithKey:(id)key latitude:(double)latitude longitude:(double)longitude;
- (void)unsetLocationCustomAttributeWithKey:(id)key;
- (void)addToSubscriptionGroupWithGroupId:(id)id;
- (void)removeFromSubscriptionGroupWithGroupId:(id)id;
- (void)_compat_setFirstName:(id)name;
- (void)_compat_setLastName:(id)name;
- (void)_compat_setEmail:(id)email;
- (void)_compat_setDateOfBirth:(id)birth;
- (void)_compat_setCountry:(id)country;
- (void)_compat_setHomeCity:(id)city;
- (void)_compat_setLanguage:(id)language;
- (void)_compat_setPhone:(id)phone;
- (void)_compat_setAttributionData:(id)data;
- (_Bool)addAlias:(id)alias withLabel:(id)label;
- (_Bool)setEmailNotificationSubscriptionType:(long long)type;
- (_Bool)setPushNotificationSubscriptionType:(long long)type;
- (_Bool)setCustomAttributeWithKey:(id)key andBOOLValue:(_Bool)boolvalue;
- (_Bool)setCustomAttributeWithKey:(id)key andIntegerValue:(long long)value;
- (_Bool)setCustomAttributeWithKey:(id)key andDoubleValue:(double)value;
- (_Bool)setCustomAttributeWithKey:(id)key andStringValue:(id)value;
- (_Bool)setCustomAttributeWithKey:(id)key andDateValue:(id)value;
- (_Bool)setLastKnownLocationWithLatitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(double)accuracy altitude:(double)altitude verticalAccuracy:(double)accuracy;
- (_Bool)addLocationCustomAttributeWithKey:(id)key latitude:(double)latitude longitude:(double)longitude;
- (_Bool)removeLocationCustomAttributeWithKey:(id)key;
- (void)idOnQueue:(id)queue completion:(id /* block */)completion;
- (void)idWithCompletion:(id /* block */)completion;
- (void)addToCustomAttributeArrayWithKey:(id)key value:(id)value;
- (void)removeFromCustomAttributeArrayWithKey:(id)key value:(id)value;
- (void)setPhoneNumber:(id)number;
- (id)init;

@end

#endif /* BRZUser_h */
