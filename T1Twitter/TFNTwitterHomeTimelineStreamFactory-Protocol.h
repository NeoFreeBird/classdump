//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterHomeTimelineStreamFactory_Protocol_h
#define TFNTwitterHomeTimelineStreamFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterHomeTimelineStreamFactory <NSObject>

@required

/* required instance methods */
- (id)createWithAccount:(id)account;
- (id)createWithAccount:(id)account;

@optional

@end

#endif /* TFNTwitterHomeTimelineStreamFactory_Protocol_h */
