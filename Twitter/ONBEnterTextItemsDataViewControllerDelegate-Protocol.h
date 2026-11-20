//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEnterTextItemsDataViewControllerDelegate_Protocol_h
#define ONBEnterTextItemsDataViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterTextItemsDataViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)enterTextItemsDataViewController:(id)controller didTapNextWithText:(id)text;
- (void)enterTextItemsDataViewControllerDidTapSkip:(id)skip;
- (void)enterTextItemsDataViewController:(id)controller didReturnWithText:(id)text;
- (void)enterTextItemsDataViewController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (id)currentWindow;

@optional

@end

#endif /* ONBEnterTextItemsDataViewControllerDelegate_Protocol_h */
