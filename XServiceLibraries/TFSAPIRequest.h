//
#ifndef TFSAPIRequest_h
#define TFSAPIRequest_h
@import Foundation;

#include "TFSAPIMultipartFormData.h"
#include "TNLRequest-Protocol.h"
#include "TNLRequestConfiguration.h"

@class NSData, NSDictionary, NSObject, NSString, NSURL;

@interface TFSAPIRequest : NSObject <TNLRequest> {
    /* instance variables */
    TFSAPIMultipartFormData *_multipartFormData;
    NSDictionary *_headerFields;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long HTTPMethodValue;
@property (readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly, nonatomic) NSData *HTTPBody;
@property (readonly, copy, nonatomic) NSString *HTTPBodyFilePath;
@property (readonly, copy, nonatomic) NSString *endpointURLString;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) _Bool parametersEmbeddedInQuery;
@property (readonly, nonatomic) _Bool emptyResponseDataExpected;
@property (readonly, nonatomic) TNLRequestConfiguration *requestConfiguration;
@property (readonly, nonatomic) long long requestPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)responseClass;

/* instance methods */
- (id)init;
- (id)initWithHTTPMethodValue:(long long)value endpointURLString:(id)urlstring parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields requestConfiguration:(id)configuration emptyResponseDataExpected:(_Bool)expected;
- (id)objectWithResponseData:(id)data headerFields:(id)fields error:(out id *)error;
- (void)cleanUp;
- (_Bool)areParametersEmbeddedInQuery;
- (_Bool)isEmptyResponseDataExpected;

@end

#endif /* TFSAPIRequest_h */
