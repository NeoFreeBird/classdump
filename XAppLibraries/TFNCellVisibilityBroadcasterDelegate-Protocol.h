//
#ifndef TFNCellVisibilityBroadcasterDelegate_Protocol_h
#define TFNCellVisibilityBroadcasterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNCellVisibilityBroadcasterDelegate <NSObject>

@required

/* required instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;

@optional

@end

#endif /* TFNCellVisibilityBroadcasterDelegate_Protocol_h */
