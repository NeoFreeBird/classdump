//
#ifndef T1LiveEventCarouselViewControllerDelegate_Protocol_h
#define T1LiveEventCarouselViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1LiveEventCarouselViewControllerDelegate

@required

/* required instance methods */
- (void)liveEventCarouselViewController:(id)controller didSelectCarouselEntry:(id)entry;
- (id)scribeContextForCarouselViewController:(id)controller tilePosition:(id)position;

@optional

@end

#endif /* T1LiveEventCarouselViewControllerDelegate_Protocol_h */
