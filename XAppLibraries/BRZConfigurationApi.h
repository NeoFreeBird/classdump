//
#ifndef BRZConfigurationApi_h
#define BRZConfigurationApi_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSObject, NSSet, NSString;

@interface BRZConfigurationApi : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
}

@property (nonatomic) long long requestPolicy;
@property (nonatomic) long long sdkFlavor;
@property (nonatomic, readonly) NSArray *sdkMetadata;
@property (nonatomic, copy) NSSet *trackingPropertyAllowList;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *endpoint;
@property (nonatomic) double flushInterval;
@property (nonatomic) _Bool sdkAuthentication;

/* instance methods */
- (void)addSDKMetadata:(id)sdkmetadata;
- (id)init;

@end

#endif /* BRZConfigurationApi_h */
