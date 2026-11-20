//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLiveEventSubscription_h
#define TFSTwitterLiveEventSubscription_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLiveEventSubscription : NSObject

@property (readonly, nonatomic) _Bool subscribed;
@property (readonly, copy, nonatomic) NSString *notificationID;

/* class methods */
+ (id)subscriptionWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(out id *)error;

@end

#endif /* TFSTwitterLiveEventSubscription_h */
