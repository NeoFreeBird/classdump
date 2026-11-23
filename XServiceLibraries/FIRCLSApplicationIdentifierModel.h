//
#ifndef FIRCLSApplicationIdentifierModel_h
#define FIRCLSApplicationIdentifierModel_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface FIRCLSApplicationIdentifierModel : NSObject

@property (copy, nonatomic) NSDictionary *architectureUUIDMap;
@property (copy, nonatomic) NSString *buildInstanceID;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2; } builtSDK;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2; } minimumSDK;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSString *synthesizedVersion;
@property (readonly, nonatomic) long long installSource;
@property (readonly, nonatomic) NSString *builtSDKString;
@property (readonly, nonatomic) NSString *minimumSDKString;

/* instance methods */
- (id)init;
- (_Bool)computeExecutableInfo;
- (void)computeInstanceIdentifier;

@end

#endif /* FIRCLSApplicationIdentifierModel_h */
