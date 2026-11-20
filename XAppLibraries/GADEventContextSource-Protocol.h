//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADEventContextSource_Protocol_h
#define GADEventContextSource_Protocol_h
@import Foundation;

#include "GADEventContext.h"
#include "NSObject-Protocol.h"

@protocol GADEventContextSource <NSObject>

@required

@property (readonly, nonatomic) GADEventContext *context;

@optional

@end

#endif /* GADEventContextSource_Protocol_h */
