//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTVDIScribe_h
#define PTVTVDIScribe_h
@import Foundation;

#include "TAVScribe-Protocol.h"

@class NSObject;

@interface PTVTVDIScribe : NSObject <TAVScribe>

/* instance methods */
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@end

#endif /* PTVTVDIScribe_h */
