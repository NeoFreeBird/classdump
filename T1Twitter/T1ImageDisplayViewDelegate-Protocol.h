//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImageDisplayViewDelegate_Protocol_h
#define T1ImageDisplayViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ImageDisplayViewDelegate <NSObject>

@required

/* required instance methods */
- (void)imageDisplayView:(id)view didLongPress:(id)press;
- (void)imageDisplayView:(id)view didTriggerContextMenuInteraction:(id)interaction;

@optional

@end

#endif /* T1ImageDisplayViewDelegate_Protocol_h */
