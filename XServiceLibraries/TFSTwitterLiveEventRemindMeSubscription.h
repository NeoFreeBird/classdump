//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
