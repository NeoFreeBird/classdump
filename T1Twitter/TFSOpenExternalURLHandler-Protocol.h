//
#ifndef TFSOpenExternalURLHandler_Protocol_h
#define TFSOpenExternalURLHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSOpenExternalURLHandler <NSObject>

@required

/* required instance methods */
- (void)protocolRouter:(id)router openExternalURL:(id)url context:(id)context completion:(id /* block */)completion;

@optional

@end

#endif /* TFSOpenExternalURLHandler_Protocol_h */
