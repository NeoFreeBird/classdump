//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLAttemptMetrics_h
#define TNLAttemptMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TNLAttemptMetaData.h"
#include "TNLCarrierInfo-Protocol.h"

@class NSArray, NSDate, NSError, NSHTTPURLResponse, NSObject, NSString, NSURLRequest, NSURLSessionTaskTransactionMetrics;

@interface TNLAttemptMetrics : NSObject <NSSecureCoding, NSCopying> {
    /* instance variables */
    _Bool _final;
}

@property (readonly, nonatomic) long long attemptId;
@property (readonly, nonatomic) long long attemptType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) unsigned long long startMachTime;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long endMachTime;
@property (readonly, nonatomic) TNLAttemptMetaData *metaData;
@property (readonly, nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) unsigned int reachabilityFlags;
@property (readonly, copy, nonatomic) NSString *WWANRadioAccessTechnology;
@property (readonly, nonatomic) id <TNLCarrierInfo> carrierInfo;
@property (readonly, nonatomic) long long captivePortalStatus;
@property (readonly, copy, nonatomic) NSURLRequest *URLRequest;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse;
@property (readonly, nonatomic) NSError *operationError;
@property (readonly, nonatomic) NSURLSessionTaskTransactionMetrics *taskTransactionMetrics;
@property (readonly, copy, nonatomic) NSArray *APIErrors;
@property (readonly, nonatomic) NSError *responseBodyParseError;

/* class methods */
+ (long long)_thriftResponseSourceForMetaData:(id)data xcacheHeader:(id)header;
+ (id)_thriftMobileDetailsFromCarrierInfo:(id)info;
+ (id)_thriftNetworkStatusWithReachabilityStatus:(long long)status WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status carrierInfo:(id)info;
+ (id)_requestDetailsForMetaData:(id)data taskMetrics:(id)metrics;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)_thriftNetworkStatus;
- (id)clientNetworkRequestEvent;
- (id)init;
- (id)initWithType:(long long)type startDate:(id)date startMachTime:(unsigned long long)time endDate:(id)date endMachTime:(unsigned long long)time metaData:(id)data URLRequest:(id)urlrequest URLResponse:(id)urlresponse operationError:(id)error;
- (id)initWithAttemptId:(long long)id type:(long long)type startDate:(id)date startMachTime:(unsigned long long)time endDate:(id)date endMachTime:(unsigned long long)time metaData:(id)data URLRequest:(id)urlrequest URLResponse:(id)urlresponse operationError:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (double)duration;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)dictionaryDescription:(_Bool)description;
- (id)description;

@end

#endif /* TNLAttemptMetrics_h */
