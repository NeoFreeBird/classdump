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
