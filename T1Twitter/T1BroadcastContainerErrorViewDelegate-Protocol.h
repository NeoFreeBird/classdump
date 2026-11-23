//
#ifndef T1BroadcastContainerErrorViewDelegate_Protocol_h
#define T1BroadcastContainerErrorViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcastContainerErrorViewDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastErrorViewDidTapGeoButton:(id)button;
- (void)broadcastErrorViewDidTapReloadButton:(id)button;

@optional

@end

#endif /* T1BroadcastContainerErrorViewDelegate_Protocol_h */
