//
#ifndef T1AppAuthenticationEventHandling_Protocol_h
#define T1AppAuthenticationEventHandling_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppAuthenticationEventHandling <NSObject>

@required

/* required instance methods */
- (void)reauthAccount:(id)account;

@optional

@end

#endif /* T1AppAuthenticationEventHandling_Protocol_h */
