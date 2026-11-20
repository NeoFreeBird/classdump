//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetActionAdapterDelegate_Protocol_h
#define TFNMenuSheetActionAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSheetActionAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;

@optional

@end

#endif /* TFNMenuSheetActionAdapterDelegate_Protocol_h */
