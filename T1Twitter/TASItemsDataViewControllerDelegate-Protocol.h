//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASItemsDataViewControllerDelegate_Protocol_h
#define TASItemsDataViewControllerDelegate_Protocol_h
@import Foundation;

@protocol TASItemsDataViewControllerDelegate

@required

/* required instance methods */
- (void)itemsDataViewControllerDidTapLeave:(id)leave;

@optional

@end

#endif /* TASItemsDataViewControllerDelegate_Protocol_h */
