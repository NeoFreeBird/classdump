//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdMetadataDelegate_Protocol_h
#define GADAdMetadataDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdMetadataDelegate <NSObject>

@required

/* required instance methods */
- (void)adMetadataDidChange:(id)change;

@optional

@end

#endif /* GADAdMetadataDelegate_Protocol_h */
