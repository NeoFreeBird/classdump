//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
