//
#ifndef TFSTwitterOAuthRequestTokenResponse_h
#define TFSTwitterOAuthRequestTokenResponse_h
@import Foundation;

#include "TFSTwitterOAuthRequestTokenScopePolicy.h"

@class NSObject, NSString;

@interface TFSTwitterOAuthRequestTokenResponse : NSObject

@property (readonly, copy, nonatomic) NSString *requestTokenAuthParameters;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSString *appURLString;
@property (readonly, copy, nonatomic) NSString *privacyPolicyURLString;
@property (readonly, copy, nonatomic) NSString *termsAndConditionsURLString;
@property (readonly, nonatomic) _Bool allowWrite;
@property (readonly, nonatomic) _Bool allowRead;
@property (readonly, nonatomic) _Bool allowDMWrite;
@property (readonly, nonatomic) _Bool allowDMRead;
@property (readonly, nonatomic) _Bool allowEmail;
@property (readonly, nonatomic) _Bool allowAdsCampaignManagement;
@property (readonly, nonatomic) _Bool allowAdsAnalytics;
@property (readonly, copy, nonatomic) NSString *imageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, copy, nonatomic) TFSTwitterOAuthRequestTokenScopePolicy *policy;

/* class methods */
+ (id)requestTokenResponseWithData:(id)data accountPermissionDataParsingEnabled:(_Bool)enabled jsonResponse:(_Bool)response error:(id *)error;

/* instance methods */
- (id)initWithData:(id)data accountPermissionDataParsingEnabled:(_Bool)enabled;
- (id)initWithDictionary:(id)dictionary accountPermissionDataParsingEnabled:(_Bool)enabled;
- (id)init;

@end

#endif /* TFSTwitterOAuthRequestTokenResponse_h */
