//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewHost_Protocol_h
#define TFNComposableViewHost_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNComposableViewSet;

@protocol TFNComposableViewHost <NSObject>

@required

@property (nonatomic, readonly) TFNComposableViewSet *viewSet;

@optional

@end

#endif /* TFNComposableViewHost_Protocol_h */
