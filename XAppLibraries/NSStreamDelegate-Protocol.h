//
#ifndef NSStreamDelegate_Protocol_h
#define NSStreamDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSStreamDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;

@end

#endif /* NSStreamDelegate_Protocol_h */
