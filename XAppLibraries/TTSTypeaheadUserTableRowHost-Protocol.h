//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTypeaheadUserTableRowHost_Protocol_h
#define TTSTypeaheadUserTableRowHost_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSTypeaheadUserTableRowHost <NSObject>

@required

/* required instance methods */
- (void)typeaheadUserAdapter:(id)adapter didSelectUser:(id)user atIndexPath:(id)path;

@optional

/* optional instance methods */
- (void)typeaheadUserAdapter:(id)adapter didSelectMessageForUser:(id)user;

@end

#endif /* TTSTypeaheadUserTableRowHost_Protocol_h */
