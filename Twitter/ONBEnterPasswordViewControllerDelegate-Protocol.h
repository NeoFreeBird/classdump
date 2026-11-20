//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEnterPasswordViewControllerDelegate_Protocol_h
#define ONBEnterPasswordViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterPasswordViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)enterPasswordViewController:(id)controller didTapNextWithInputText:(id)text;
- (void)enterPasswordViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBEnterPasswordViewControllerDelegate_Protocol_h */
