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
