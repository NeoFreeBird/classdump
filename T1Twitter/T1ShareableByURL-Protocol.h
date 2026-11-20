//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ShareableByURL_Protocol_h
#define T1ShareableByURL_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ShareableByURL <NSObject>

@required

@property (nonatomic) _Bool shareTokenInURLEnabled;

@optional

@end

#endif /* T1ShareableByURL_Protocol_h */
