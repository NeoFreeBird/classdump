//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSiOSCaptionDelegate_Protocol_h
#define LHLSiOSCaptionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSiOSCaptionDelegate <NSObject>

@required

/* required instance methods */
- (void)renderCaption:(id)caption;

@optional

@end

#endif /* LHLSiOSCaptionDelegate_Protocol_h */
