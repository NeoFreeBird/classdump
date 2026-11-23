//
#ifndef T1RadarWebviewContainer_h
#define T1RadarWebviewContainer_h
@import Foundation;

#include "_TtC14T1TwitterSwift25PreloadedWebviewContainer.h"

@interface T1RadarWebviewContainer : T1TwitterSwift.PreloadedWebviewContainer // (Swift)

/* instance methods */
- (id)initWithAccount:(id)account radarID:(id)id;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1RadarWebviewContainer_h */
