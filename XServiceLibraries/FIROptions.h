//
#ifndef FIROptions_h
#define FIROptions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface FIROptions : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *optionsDictionary;
@property (readonly, nonatomic) NSDictionary *analyticsOptionsDictionary;
@property (readonly, nonatomic) _Bool isAnalyticsCollectionExplicitlySet;
@property (readonly, nonatomic) _Bool isAnalyticsCollectionEnabled;
@property (readonly, nonatomic) _Bool isAnalyticsCollectionDeactivated;
@property (readonly, copy, nonatomic) NSString *libraryVersionID;
@property (nonatomic) _Bool usingOptionsFromDefaultPlist;
@property (readonly, nonatomic) _Bool isMeasurementEnabled;
@property (nonatomic) _Bool editingLocked;
@property (copy, nonatomic) NSString *APIKey;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *trackingID;
@property (copy, nonatomic) NSString *GCMSenderID;
@property (copy, nonatomic) NSString *projectID;
@property (copy, nonatomic) NSString *androidClientID;
@property (copy, nonatomic) NSString *googleAppID;
@property (copy, nonatomic) NSString *databaseURL;
@property (copy, nonatomic) NSString *deepLinkURLScheme;
@property (copy, nonatomic) NSString *storageBucket;
@property (copy, nonatomic) NSString *appGroupID;

/* class methods */
+ (id)defaultOptions;
+ (id)defaultOptionsDictionary;
+ (id)plistFilePathWithName:(id)name;
+ (void)resetDefaultOptions;

/* instance methods */
- (id)initInternalWithOptionsDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (id)initWithContentsOfFile:(id)file;
- (id)initWithGoogleAppID:(id)id GCMSenderID:(id)id;
- (void)checkEditingLocked;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToOptions:(id)options;
- (unsigned long long)hash;
- (id)analyticsOptionsDictionaryWithInfoDictionary:(id)dictionary;
- (_Bool)isEditingLocked;

@end

#endif /* FIROptions_h */
