//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTooltipManagerDataSource_Protocol_h
#define TFNTooltipManagerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipManagerDataSource <NSObject>

@required

/* required instance methods */
- (id)defaultTooltipPresentationView;

@optional

@end

#endif /* TFNTooltipManagerDataSource_Protocol_h */
