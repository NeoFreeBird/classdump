//
#ifndef TNLResponseInfo_h
#define TNLResponseInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TNLTemporaryFile-Protocol.h"

@class NSData, NSDate, NSDictionary, NSHTTPURLResponse, NSObject, NSString, NSURL, NSURLRequest;

@interface TNLResponseInfo : NSObject <NSSecureCoding> {
    /* instance variables */
    NSString *_rawRetryAfterValue;
    id _parsedRetryAfterValue;
    NSDictionary *_cachedLowercaseHeaderFields;
}

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSURL *finalURL;
@property (readonly, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly, nonatomic) _Bool hasRetryAfterHeader;
@property (readonly, nonatomic) NSString *retryAfterRawValue;
@property (readonly, nonatomic) NSDate *retryAfterDate;
@property (readonly, nonatomic) NSURLRequest *finalURLRequest;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) id <TNLTemporaryFile> temporarySavedFile;
@property (readonly, nonatomic) long long source;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (double)retryAfterDelayFromNow;
- (id)valueForResponseHeaderField:(id)field;
- (id)allHTTPHeaderFieldsWithLowerCaseKeys;
- (id)init;
- (id)initWithFinalURLRequest:(id)urlrequest URLResponse:(id)urlresponse source:(long long)source data:(id)data temporarySavedFile:(id)file;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TNLResponseInfo_h */
