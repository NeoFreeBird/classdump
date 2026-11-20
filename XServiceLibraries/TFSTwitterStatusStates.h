//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStatusStates_h
#define TFSTwitterStatusStates_h
@import Foundation;

#include "TFSTwitterStatus.h"

@class NSObject;

@interface TFSTwitterStatusStates : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterStatus *presentation;
@property (nonatomic, readonly) TFSTwitterStatus *pure;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterStatusStates_h */
