//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZSDKMetadata_h
#define BRZSDKMetadata_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZSDKMetadata : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall sdkMetadata;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)adjust;
+ (id)airbridge;
+ (id)applevisionpro;
+ (id)appsflyer;
+ (id)bluedot;
+ (id)branch;
+ (id)cordova;
+ (id)carthage;
+ (id)cocoapods;
+ (id)cordovapm;
+ (id)expo;
+ (id)foursquare;
+ (id)flutter;
+ (id)googletagmanager;
+ (id)gimbal;
+ (id)gradle;
+ (id)ionic;
+ (id)kochava;
+ (id)manual;
+ (id)maccatalyst;
+ (id)mparticle;
+ (id)nativescript;
+ (id)npm;
+ (id)nuget;
+ (id)pub;
+ (id)radar;
+ (id)reactnative;
+ (id)reactnativenewarch;
+ (id)segment;
+ (id)singular;
+ (id)swiftpm;
+ (id)tealium;
+ (id)unreal;
+ (id)unitypm;
+ (id)unity;
+ (id)vizbee;
+ (id)xamarin;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZSDKMetadata_h */
