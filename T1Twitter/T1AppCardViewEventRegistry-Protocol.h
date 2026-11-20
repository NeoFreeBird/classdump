//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppCardViewEventRegistry_Protocol_h
#define T1AppCardViewEventRegistry_Protocol_h
@import Foundation;

@protocol T1AppCardViewEventRegistry

@required

/* required instance methods */
- (void)registerAvatarView:(id)view;
- (void)registerAvatarTextHighlightView:(id)view;
- (void)registerImageHighlightView:(id)view;
- (void)registerDescriptionHighlightView:(id)view;
- (void)registerCallToActionButton:(id)button;

@optional

@end

#endif /* T1AppCardViewEventRegistry_Protocol_h */
