//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSRecentSearchTypeaheadViewControllerDelegate_Protocol_h
#define TTSRecentSearchTypeaheadViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSRecentSearchTypeaheadViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)recentSearchTypeaheadController:(id)controller didSelectResult:(id)result;

@optional

@end

#endif /* TTSRecentSearchTypeaheadViewControllerDelegate_Protocol_h */
