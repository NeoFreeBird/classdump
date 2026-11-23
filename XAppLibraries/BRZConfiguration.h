//
#ifndef BRZConfiguration_h
#define BRZConfiguration_h
@import Foundation;

#include "BRZConfigurationApi.h"
#include "BRZConfigurationLocation.h"
#include "BRZConfigurationLogger.h"
#include "BRZConfigurationPush.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSObject;

@interface BRZConfiguration : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _debugger;
}

@property (nonatomic, copy) NSArray *devicePropertyAllowList;
@property (nonatomic, retain) BRZConfigurationApi *api;
@property (nonatomic, retain) BRZConfigurationPush *push;
@property (nonatomic, retain) BRZConfigurationLocation *location;
@property (nonatomic, retain) BRZConfigurationLogger *logger;
@property (nonatomic) double sessionTimeout;
@property (nonatomic) double triggerMinimumTimeInterval;
@property (nonatomic) _Bool useUUIDAsDeviceId;
@property (nonatomic) _Bool forwardUniversalLinks;
@property (nonatomic) _Bool optInWhenPushAuthorized;
@property (nonatomic) unsigned long long tvOSPersistedSizeLimit;
@property (nonatomic) _Bool preventInAppMessageDisplayForDifferentUser;
@property (nonatomic, copy) NSArray *ephemeralEvents;

/* instance methods */
- (id)initWithApiKey:(id)key endpoint:(id)endpoint;
- (id)init;

@end

#endif /* BRZConfiguration_h */
