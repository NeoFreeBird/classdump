//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
