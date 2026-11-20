//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCOffPlatformShareable_Protocol_h
#define TSCOffPlatformShareable_Protocol_h
@import Foundation;

#include "TSCTextShareable-Protocol.h"

@protocol TSCOffPlatformShareable <TSCTextShareable>

@required

/* required instance methods */
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;

@optional

@end

#endif /* TSCOffPlatformShareable_Protocol_h */
