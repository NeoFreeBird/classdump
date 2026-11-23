//
#ifndef PTVTwitterGuestAuthenticationModel_h
#define PTVTwitterGuestAuthenticationModel_h
@import Foundation;

#include "PTVTwitterAuthentication-Protocol.h"

@class NSObject, NSString;

@interface PTVTwitterGuestAuthenticationModel : NSObject <PTVTwitterAuthentication>

@property (readonly, copy, nonatomic) NSString *accessToken;
@property (readonly, copy, nonatomic) NSString *guestToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessToken:(id)token guestToken:(id)token;

@end

#endif /* PTVTwitterGuestAuthenticationModel_h */
