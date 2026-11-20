//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuDisplayEvents_Protocol_h
#define TFNMenuDisplayEvents_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuDisplayEvents <NSObject>

@required

@property (nonatomic, copy) id /* block */ willDisplayMenuBlock;
@property (nonatomic, copy) id /* block */ willDismissMenuBlock;

@optional

@end

#endif /* TFNMenuDisplayEvents_Protocol_h */
