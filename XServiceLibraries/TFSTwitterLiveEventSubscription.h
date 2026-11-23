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
