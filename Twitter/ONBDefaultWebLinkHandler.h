//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
