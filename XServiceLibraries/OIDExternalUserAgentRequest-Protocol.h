//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDExternalUserAgentRequest_Protocol_h
#define OIDExternalUserAgentRequest_Protocol_h
@import Foundation;

@protocol OIDExternalUserAgentRequest

@required

/* required instance methods */
- (id)externalUserAgentRequestURL;
- (id)redirectScheme;

@optional

@end

#endif /* OIDExternalUserAgentRequest_Protocol_h */
