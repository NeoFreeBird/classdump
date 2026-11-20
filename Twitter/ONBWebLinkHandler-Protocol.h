//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBWebLinkHandler_Protocol_h
#define ONBWebLinkHandler_Protocol_h
@import Foundation;

@protocol ONBWebLinkHandler

@required

/* required instance methods */
- (void)openWebLinkFrom:(id)from account:(id)account url:(id)url chromeless:(_Bool)chromeless;

@optional

@end

#endif /* ONBWebLinkHandler_Protocol_h */
