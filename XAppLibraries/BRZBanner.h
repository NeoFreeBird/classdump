//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZBanner_h
#define BRZBanner_h
@import Foundation;

#include "BRZBannerContext.h"

@class Chat.DidEndCall, NSDictionary, NSObject, NSString;

@interface BRZBanner : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
    oneway _Atomic Chat.DidEndCall _campaignProperties;
}

@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSString *trackingId;
@property (nonatomic, copy) NSString *stableKey;
@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, copy) NSString *html;
@property (nonatomic) long long expiresAt;
@property (nonatomic) _Bool isTestSend;
@property (nonatomic) _Bool isControl;
@property (nonatomic, retain) BRZBannerContext *context;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)decodingWithJson:(id)json;

/* instance methods */
- (void)logImpressionUsing:(id)_using;
- (void)logClickWithButtonId:(id)id using:(id)_using;
- (void)logDismissedUsing:(id)_using;
- (id)numberPropertyForKey:(id)key;
- (id)timestampPropertyForKey:(id)key;
- (id)boolPropertyForKey:(id)key;
- (id)jsonPropertyForKey:(id)key;
- (id)stringPropertyForKey:(id)key;
- (id)imagePropertyForKey:(id)key;
- (id)initWithTrackingId:(id)id placementId:(id)id stableKey:(id)key html:(id)html expiresAt:(long long)at isTestSend:(_Bool)send isControl:(_Bool)control properties:(id)properties;
- (id)init;
- (id)json;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZBanner_h */
