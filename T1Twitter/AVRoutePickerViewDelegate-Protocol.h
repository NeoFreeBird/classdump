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
