//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZTrackingProperty_h
#define BRZTrackingProperty_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZTrackingProperty : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall trackingProperty;
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
