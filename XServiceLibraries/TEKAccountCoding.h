//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAccountCoding_h
#define TEKAccountCoding_h
@import Foundation;

#include "TFSTwitterAccountCoding-Protocol.h"

@class NSObject;

@interface TEKAccountCoding : NSObject <TFSTwitterAccountCoding>

/* instance methods */
- (id)decode:(id)decode;
- (id)encode:(id)encode;

@end

#endif /* TEKAccountCoding_h */
