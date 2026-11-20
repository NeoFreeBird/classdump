//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselSubheaderViewControllerDelegate_Protocol_h
#define T1LiveEventCarouselSubheaderViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1LiveEventCarouselSubheaderViewControllerDelegate

@required

/* required instance methods */
- (void)liveEventCarouselSubheaderViewController:(id)controller didSelectCarouselEntry:(id)entry;
- (id)scribeContextForCarouselSubheaderViewController:(id)controller tilePosition:(id)position;

@optional

@end

#endif /* T1LiveEventCarouselSubheaderViewControllerDelegate_Protocol_h */
