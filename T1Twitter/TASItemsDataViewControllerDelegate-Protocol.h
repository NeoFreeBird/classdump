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
