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
