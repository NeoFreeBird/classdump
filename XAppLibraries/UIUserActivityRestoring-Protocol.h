//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIUserActivityRestoring_Protocol_h
#define UIUserActivityRestoring_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIUserActivityRestoring <NSObject>

@required

/* required instance methods */
- (void)restoreUserActivityState:(id)state;

@optional

@end

#endif /* UIUserActivityRestoring_Protocol_h */
