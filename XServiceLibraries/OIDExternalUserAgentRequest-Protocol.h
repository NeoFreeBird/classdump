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
