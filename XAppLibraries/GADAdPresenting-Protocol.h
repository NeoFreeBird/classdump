//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdPresenting_Protocol_h
#define GADAdPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdPresenting <NSObject>

@required

/* required instance methods */
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;

@optional

@end

#endif /* GADAdPresenting_Protocol_h */
