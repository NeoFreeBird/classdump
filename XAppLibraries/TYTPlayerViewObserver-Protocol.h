//
#ifndef TYTPlayerViewObserver_Protocol_h
#define TYTPlayerViewObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TYTPlayerViewObserver <NSObject>

@required

/* required instance methods */
- (void)ytPlayerView:(id)view didUpdateWithState:(id)state;
- (void)ytPlayerView:(id)view didEncounterNonFatalError:(id)error;

@optional

@end

#endif /* TYTPlayerViewObserver_Protocol_h */
