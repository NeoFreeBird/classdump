//
#ifndef TVPPlayerSessionProducible_Protocol_h
#define TVPPlayerSessionProducible_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TVPPlayerSessionProducible <NSObject>

@required

/* required instance methods */
- (_Bool)canProducePlayerSessionWithAccount:(id)account;
- (id)produceSessionForConfiguration:(id)configuration account:(id)account playbackObservers:(id)observers initialScribeContext:(id)context;

@optional

@end

#endif /* TVPPlayerSessionProducible_Protocol_h */
