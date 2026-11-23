//
#ifndef TFSTwitterLiveEventRemindMeSubscription_h
#define TFSTwitterLiveEventRemindMeSubscription_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLiveEventRemindMeSubscription : NSObject

@property (readonly, nonatomic) _Bool enabled;
@property (nonatomic) _Bool subscribed;
@property (readonly, copy, nonatomic) NSString *notificationID;

/* instance methods */
- (id)init;
- (id)initWithEnabled:(_Bool)enabled subscribed:(_Bool)subscribed notificationID:(id)id;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)toJSONDictionary;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToRemindMeSubscription:(id)subscription;
- (_Bool)isEnabled;
- (_Bool)isSubscribed;

@end

#endif /* TFSTwitterLiveEventRemindMeSubscription_h */
