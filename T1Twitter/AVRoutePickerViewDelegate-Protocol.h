//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVRoutePickerViewDelegate_Protocol_h
#define AVRoutePickerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVRoutePickerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)routePickerViewWillBeginPresentingRoutes:(id)routes;
- (void)routePickerViewDidEndPresentingRoutes:(id)routes;

@end

#endif /* AVRoutePickerViewDelegate_Protocol_h */
