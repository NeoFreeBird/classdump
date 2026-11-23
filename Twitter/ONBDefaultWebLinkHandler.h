//
#ifndef ONBDefaultWebLinkHandler_h
#define ONBDefaultWebLinkHandler_h
@import Foundation;

#include "ONBWebLinkHandler-Protocol.h"

@class NSObject;

@interface ONBDefaultWebLinkHandler : NSObject <ONBWebLinkHandler> // (Swift)

/* instance methods */
- (void)openWebLinkFrom:(id)from account:(id)account url:(id)url chromeless:(_Bool)chromeless;
- (id)init;

@end

#endif /* ONBDefaultWebLinkHandler_h */
