//
#ifndef T1LiveEventPresentationScribeParameterBuilder_h
#define T1LiveEventPresentationScribeParameterBuilder_h
@import Foundation;

#include "T1LiveEvent.h"

@class NSObject, TFSTwitterBroadcast;

@interface T1LiveEventPresentationScribeParameterBuilder : NSObject

@property (retain, nonatomic) TFSTwitterBroadcast *hostBroadcast;
@property (retain, nonatomic) TFSTwitterBroadcast *targetBroadcast;
@property (retain, nonatomic) T1LiveEvent *hostLiveEvent;
@property (retain, nonatomic) T1LiveEvent *targetLiveEvent;

/* instance methods */
- (id)presentationScribeParameters;

@end

#endif /* T1LiveEventPresentationScribeParameterBuilder_h */
