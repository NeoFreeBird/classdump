//
#ifndef ONBAddLocationViewControllerDelegate_Protocol_h
#define ONBAddLocationViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBAddLocationViewControllerDelegate

@required

/* required instance methods */
- (void)addLocationViewController:(id)controller didTapNextWithLocation:(id)location placeID:(id)id;
- (void)addLocationViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBAddLocationViewControllerDelegate_Protocol_h */
