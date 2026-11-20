//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPaletteViewController_Protocol_h
#define PTVPaletteViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPaletteViewController <NSObject>

@required

@property (readonly) double paletteViewHeight;
@property (readonly) _Bool paletteViewShouldDisableInteraction;

@optional

@end

#endif /* PTVPaletteViewController_Protocol_h */
