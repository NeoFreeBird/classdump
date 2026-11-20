//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSNumberAbbreviation_Protocol_h
#define TFSNumberAbbreviation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSNumberAbbreviation <NSObject>

@required

/* required instance methods */
- (id)abbreviatedStringForNumber:(id)number;

@optional

@end

#endif /* TFSNumberAbbreviation_Protocol_h */
