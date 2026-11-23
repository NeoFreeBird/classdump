//
#ifndef BRZFeatureFlag_h
#define BRZFeatureFlag_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSDictionary, NSObject, NSString;

@interface BRZFeatureFlag : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _id;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _campaignProperties;
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
