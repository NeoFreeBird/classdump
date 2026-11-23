//
#ifndef ProfileActionButtonsControllerDelegate_Protocol_h
#define ProfileActionButtonsControllerDelegate_Protocol_h
@import Foundation;

@protocol ProfileActionButtonsControllerDelegate

@required

/* required instance methods */
- (void)profileActionButtonsControllerDidUpdateVisibleButtons:(id)buttons;
- (void)profileActionButtonsControllerDidUpdateOccupiedContentRect:(id)rect;

@optional

@end

#endif /* ProfileActionButtonsControllerDelegate_Protocol_h */
