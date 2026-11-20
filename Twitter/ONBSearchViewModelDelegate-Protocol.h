//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSearchViewModelDelegate_Protocol_h
#define ONBSearchViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSearchViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)searchViewModelTextDidBeginEditing:(id)editing;
- (void)searchViewModelTextDidEndEditing:(id)editing;
- (void)searchViewModel:(id)model textDidChange:(id)change;

@optional

/* optional instance methods */
- (void)searchViewModelDidSearch:(id)search;
- (void)searchViewModelDidCancel:(id)cancel fromButton:(_Bool)button;

@end

#endif /* ONBSearchViewModelDelegate_Protocol_h */
