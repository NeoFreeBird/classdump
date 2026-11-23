//
#ifndef TFNSwiftUIComponentRepresentable_Protocol_h
#define TFNSwiftUIComponentRepresentable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNSwiftUIComponentRepresentable <NSObject>

@required

/* required instance methods */
- (void)applySwiftUIConfiguration:(id)uiconfiguration;

@optional

@end

#endif /* TFNSwiftUIComponentRepresentable_Protocol_h */
