//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
