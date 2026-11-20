//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSwiftUIComponentRepresentableViewFactory_Protocol_h
#define TFNSwiftUIComponentRepresentableViewFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNSwiftUIComponentRepresentableViewFactory <NSObject>

@required

/* required instance methods */
- (id)makeSwiftUIRepresentedView;

@optional

@end

#endif /* TFNSwiftUIComponentRepresentableViewFactory_Protocol_h */
