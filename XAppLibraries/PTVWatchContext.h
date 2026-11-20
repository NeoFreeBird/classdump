//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchContext_h
#define PTVWatchContext_h
@import Foundation;

#include "PTVChannel.h"

@class NSDictionary, NSObject, NSString;

@interface PTVWatchContext : NSObject

@property (readonly, nonatomic) NSString *feed;
@property (readonly, nonatomic) _Bool fromPushNotification;
@property (readonly, nonatomic) _Bool fromURL;
@property (readonly, nonatomic) _Bool fromPermissions;
@property (readonly, nonatomic) long long numWatchers;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } position;
@property (readonly, nonatomic) NSString *previousScreen;
@property (readonly, nonatomic) NSString *payload;
@property (retain, nonatomic) PTVChannel *channel;
@property (nonatomic) long long feedLength;
@property (nonatomic) _Bool isIncognito;
@property (copy, nonatomic) NSDictionary *sourceParameters;

/* instance methods */
- (id)init;
- (id)initFromPush;
- (id)initFromPermissions;
- (id)initFromInAppAlert;
- (id)initFromURL;
- (id)initWithFeed:(id)feed payload:(id)payload previousScreen:(id)screen;
- (id)initWithFeed:(id)feed payload:(id)payload previousScreen:(id)screen position:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })position;
- (void)addBroadcastInfo:(id)info;
- (id)toJson64;

@end

#endif /* PTVWatchContext_h */
