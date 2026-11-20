//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
