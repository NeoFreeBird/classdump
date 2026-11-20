//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZFeatureFlag_h
#define BRZFeatureFlag_h
@import Foundation;

@class Chat.DidEndCall, NSDictionary, NSObject, NSString;

@interface BRZFeatureFlag : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
    oneway _Atomic Chat.DidEndCall _id;
    oneway _Atomic Chat.DidEndCall _campaignProperties;
}

@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) _Bool enabled;
@property (nonatomic, copy) NSString *flagTrackingString;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)decodingWithJson:(id)json;

/* instance methods */
- (id)json;
- (id)numberPropertyForKey:(id)key;
- (id)timestampPropertyForKey:(id)key;
- (id)boolPropertyForKey:(id)key;
- (id)jsonPropertyForKey:(id)key;
- (id)jsonObjectPropertyForKey:(id)key;
- (id)stringPropertyForKey:(id)key;
- (id)imagePropertyForKey:(id)key;
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZFeatureFlag_h */
