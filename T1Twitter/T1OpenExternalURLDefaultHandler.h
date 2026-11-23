//
#ifndef T1OpenExternalURLDefaultHandler_h
#define T1OpenExternalURLDefaultHandler_h
@import Foundation;

#include "TFSOpenExternalURLHandler-Protocol.h"

@class NSObject, NSString;

@interface T1OpenExternalURLDefaultHandler : NSObject <TFSOpenExternalURLHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)protocolRouter:(id)router openExternalURL:(id)url context:(id)context completion:(id /* block */)completion;

@end

#endif /* T1OpenExternalURLDefaultHandler_h */
