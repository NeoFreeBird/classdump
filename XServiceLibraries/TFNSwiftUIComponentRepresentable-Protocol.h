//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
