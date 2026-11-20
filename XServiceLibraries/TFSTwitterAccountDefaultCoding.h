//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAccountDefaultCoding_h
#define TFSTwitterAccountDefaultCoding_h
@import Foundation;

#include "TFSTwitterAccountCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterAccountDefaultCoding : NSObject <TFSTwitterAccountCoding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 wrapped;
}

/* instance methods */
- (id)encode:(id)encode;
- (id)decode:(id)decode;
- (id)init;

@end

#endif /* TFSTwitterAccountDefaultCoding_h */
