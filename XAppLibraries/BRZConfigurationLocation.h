//
#ifndef BRZConfigurationLocation_h
#define BRZConfigurationLocation_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZConfigurationLocation : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
}

@property (nonatomic, retain) id brazeLocation;
@property (nonatomic) _Bool automaticLocationCollection;
@property (nonatomic) _Bool geofencesEnabled;
@property (nonatomic) _Bool automaticGeofenceRequests;
@property (nonatomic) _Bool allowBackgroundGeofenceUpdates;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) id brazeLocationProvider;

/* instance methods */
- (id)init;

@end

#endif /* BRZConfigurationLocation_h */
