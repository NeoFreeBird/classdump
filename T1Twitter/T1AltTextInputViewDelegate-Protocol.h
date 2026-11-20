//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AltTextInputViewDelegate_Protocol_h
#define T1AltTextInputViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AltTextInputViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)altTextInputViewDidChange:(id)change;

@end

#endif /* T1AltTextInputViewDelegate_Protocol_h */
