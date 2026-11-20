//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTooltipContentView_Protocol_h
#define TFNTooltipContentView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipContentView <NSObject>

@required

@property (copy, nonatomic) id /* block */ contentSizeChangedBlock;

@optional

@end

#endif /* TFNTooltipContentView_Protocol_h */
