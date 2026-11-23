//
#ifndef GACAppCheckTokenRefresherProtocol_Protocol_h
#define GACAppCheckTokenRefresherProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckTokenRefresherProtocol <NSObject>

@required

@property (copy, nonatomic) id /* block */ tokenRefreshHandler;

/* required instance methods */
- (void)updateWithRefreshResult:(id)result;

@optional

@end

#endif /* GACAppCheckTokenRefresherProtocol_Protocol_h */
