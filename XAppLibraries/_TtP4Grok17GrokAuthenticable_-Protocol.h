//
#ifndef _TtP4Grok17GrokAuthenticable__Protocol_h
#define _TtP4Grok17GrokAuthenticable__Protocol_h
@import Foundation;

@protocol Grok.GrokAuthenticable

@required

/* required instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;

@optional

@end

#endif /* _TtP4Grok17GrokAuthenticable__Protocol_h */
