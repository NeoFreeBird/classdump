//
#ifndef TNLResponseEncodedRequest_h
#define TNLResponseEncodedRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TNLRequest-Protocol.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface TNLResponseEncodedRequest : NSObject <TNLRequest, NSSecureCoding> {
    /* instance variables */
    NSURL *_URL;
    long long _HTTPMethodValue;
    NSDictionary *_allHTTPHeaderFields;
}

@property (readonly, copy, nonatomic) NSString *encodedSourceRequestClassName;
@property (readonly, nonatomic) _Bool encodedSourceRequestHadBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithSourceRequest:(id)request;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)URL;
- (long long)HTTPMethodValue;
- (id)allHTTPHeaderFields;
- (id)HTTPBody;

@end

#endif /* TNLResponseEncodedRequest_h */
