//
#ifndef TNLResponse_h
#define TNLResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TNLRequest-Protocol.h"
#include "TNLResponseInfo.h"
#include "TNLResponseMetrics.h"

@class NSError, NSObject;

@interface TNLResponse : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSError *operationError;
@property (readonly, copy, nonatomic) id <TNLRequest> originalRequest;
@property (readonly, nonatomic) TNLResponseInfo *info;
@property (readonly, nonatomic) TNLResponseMetrics *metrics;

/* class methods */
+ (id)responseWithResponse:(id)response;
+ (id)responseWithRequest:(id)request operationError:(id)error info:(id)info metrics:(id)metrics;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initInternalWithRequest:(id)request operationError:(id)error info:(id)info metrics:(id)metrics;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)prepare;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TNLResponse_h */
