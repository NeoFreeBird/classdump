//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerFactoryIdentifiable_Protocol_h
#define TAVPlayerFactoryIdentifiable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVPlayerFactoryIdentifiable <NSObject>

@required

/* required instance methods */
- (id)playerSessionProducer;

@optional

@end

#endif /* TAVPlayerFactoryIdentifiable_Protocol_h */
