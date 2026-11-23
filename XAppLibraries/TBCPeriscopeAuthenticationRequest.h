//
#ifndef TBCPeriscopeAuthenticationRequest_h
#define TBCPeriscopeAuthenticationRequest_h
@import Foundation;

#include "TNLRequest-Protocol.h"

@class NSData, NSObject, NSString, NSURL;

@interface TBCPeriscopeAuthenticationRequest : NSObject <TNLRequest>

@property (copy, nonatomic) NSString *JWT;
@property (nonatomic) _Bool direct;
@property (copy, nonatomic) NSString *cookieType;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithJWT:(id)jwt direct:(_Bool)direct cookieType:(id)type;
- (long long)HTTPMethodValue;
- (id)HTTPBody;

@end

#endif /* TBCPeriscopeAuthenticationRequest_h */
