//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCTextShareable_Protocol_h
#define TSCTextShareable_Protocol_h
@import Foundation;

#include "TSCShareable-Protocol.h"

@class NSString;

@protocol TSCTextShareable <TSCShareable>

@required

@property (nonatomic, readonly) NSString *title;

@optional

@end

#endif /* TSCTextShareable_Protocol_h */
