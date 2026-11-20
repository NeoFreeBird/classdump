//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORStorageDelegate_Protocol_h
#define GDTCORStorageDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GDTCORStorageDelegate <NSObject>

@required

/* required instance methods */
- (void)storage:(id)storage didRemoveExpiredEvents:(id)events;
- (void)storage:(id)storage didDropEvent:(id)event;

@optional

@end

#endif /* GDTCORStorageDelegate_Protocol_h */
