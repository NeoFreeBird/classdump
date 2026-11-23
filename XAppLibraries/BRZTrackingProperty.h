//
#ifndef BRZTrackingProperty_h
#define BRZTrackingProperty_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZTrackingProperty : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift trackingProperty;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)deviceData;
+ (id)firstName;
+ (id)lastName;
+ (id)email;
+ (id)dateOfBirth;
+ (id)country;
+ (id)language;
+ (id)homeCity;
+ (id)gender;
+ (id)phoneNumber;
+ (id)emailSubscriptionState;
+ (id)notificationSubscriptionState;
+ (id)attributionData;
+ (id)pushToken;
+ (id)pushToStartTokens;
+ (id)customAttributeWithAttributes:(id)attributes;
+ (id)allCustomAttributes;
+ (id)analyticsEvents;
+ (id)purchases;
+ (id)customEventWithEvents:(id)events;
+ (id)allCustomEvents;
+ (id)everything;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZTrackingProperty_h */
