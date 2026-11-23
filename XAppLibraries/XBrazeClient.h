//
#ifndef XBrazeClient_h
#define XBrazeClient_h
@import Foundation;

@class NSObject;

@interface XBrazeClient : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 lock;
    @40@0:8:16@24@32 braze;
    @40@0:8:16@24@32 pendingUserId;
    @40@0:8:16@24@32 pendingDeviceToken;
    @40@0:8:16@24@32 pendingAttributes;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)startWithApiKey:(id)key endpoint:(id)endpoint;
- (void)registerUserWithUserId:(id)id;
- (void)setupDeviceToken:(id)token;
- (void)reset;
- (void)setStringCustomAttributeWithKey:(id)key value:(id)value;
- (void)setBoolCustomAttributeWithKey:(id)key value:(_Bool)value;

@end

#endif /* XBrazeClient_h */
