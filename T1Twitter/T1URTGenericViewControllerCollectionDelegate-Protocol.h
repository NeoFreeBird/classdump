//
#ifndef T1URTGenericViewControllerCollectionDelegate_Protocol_h
#define T1URTGenericViewControllerCollectionDelegate_Protocol_h
@import Foundation;

@protocol T1URTGenericViewControllerCollectionDelegate

@required

/* required instance methods */
- (void)genericViewControllerCollectionWithDidSelectContentViewController:(id)controller at:(long long)at indexChanged:(_Bool)changed;

@optional

@end

#endif /* T1URTGenericViewControllerCollectionDelegate_Protocol_h */
