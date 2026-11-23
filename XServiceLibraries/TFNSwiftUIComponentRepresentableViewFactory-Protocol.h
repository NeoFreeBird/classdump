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
