//
#ifndef TFNTwitterHomeFeature_Protocol_h
#define TFNTwitterHomeFeature_Protocol_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@protocol TFNTwitterHomeFeature <TFSTwitterFeature>

@required

/* required instance methods */
- (id)timelineManagerProvider;

@optional

@end

#endif /* TFNTwitterHomeFeature_Protocol_h */
