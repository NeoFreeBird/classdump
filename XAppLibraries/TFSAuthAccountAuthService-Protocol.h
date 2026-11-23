//
#ifndef TFSAuthAccountAuthService_Protocol_h
#define TFSAuthAccountAuthService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthAccountAuthService <NSObject>

@required

/* required instance methods */
- (id)credentialForAccountID:(id)id;

@optional

@end

#endif /* TFSAuthAccountAuthService_Protocol_h */
