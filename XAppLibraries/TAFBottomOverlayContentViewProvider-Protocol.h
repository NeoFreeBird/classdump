//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFBottomOverlayContentViewProvider_Protocol_h
#define TAFBottomOverlayContentViewProvider_Protocol_h
@import Foundation;

#include "TAFBottomOverlayContentViewable-Protocol.h"

@protocol TAFBottomOverlayContentViewProvider

@required

@property (nonatomic, readonly) id <TAFBottomOverlayContentViewable> overlayContentView;

@optional

@end

#endif /* TAFBottomOverlayContentViewProvider_Protocol_h */
