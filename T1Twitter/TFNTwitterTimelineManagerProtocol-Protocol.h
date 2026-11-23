//
#ifndef TFNTwitterTimelineManagerProtocol_Protocol_h
#define TFNTwitterTimelineManagerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterTimelineManagerProtocol <NSObject>

@required

/* required instance methods */
- (id)initWithAccount:(id)account;
- (void)refreshHomeTimelineWithSource:(long long)source;
- (void)accountDidBecomeActive;

@optional

@end

#endif /* TFNTwitterTimelineManagerProtocol_Protocol_h */
