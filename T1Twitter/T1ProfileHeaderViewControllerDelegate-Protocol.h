//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileHeaderViewControllerDelegate_Protocol_h
#define T1ProfileHeaderViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileHeaderViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)profileHeaderViewControllerDidTapBack:(id)back;
- (void)profileHeaderViewControllerDidTapClose:(id)close;
- (void)profileHeaderViewControllerDidTapSearch:(id)search;

@optional

@end

#endif /* T1ProfileHeaderViewControllerDelegate_Protocol_h */
