//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
