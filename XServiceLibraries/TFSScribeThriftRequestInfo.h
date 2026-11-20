//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeThriftRequestInfo_h
#define TFSScribeThriftRequestInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFSScribeThriftRequestInfo : NSObject <TBase, NSCoding>

@property (copy, nonatomic) NSDictionary *ids;
@property (readonly, nonatomic) _Bool idsIsSet;
@property (copy, nonatomic) NSString *clientIpAddress;
@property (readonly, nonatomic) _Bool clientIpAddressIsSet;
@property (nonatomic) long long oauthAppId;
@property (readonly, nonatomic) _Bool oauthAppIdIsSet;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) _Bool userAgentIsSet;
@property (copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) _Bool languageCodeIsSet;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) _Bool countryCodeIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIds:(id)ids clientIpAddress:(id)address oauthAppId:(long long)id userAgent:(id)agent languageCode:(id)code countryCode:(id)code;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftRequestInfo_h */
