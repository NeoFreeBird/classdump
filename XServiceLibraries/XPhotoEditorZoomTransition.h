//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XPhotoEditorZoomTransition_h
#define XPhotoEditorZoomTransition_h
@import Foundation;

@class NSObject;

@interface XPhotoEditorZoomTransition : NSObject // (Swift)

/* class methods */
+ (void)applyZoomTransitionTo:(id)to source:(id)source;
+ (void)applyZoomTransitionTo:(id)to sourceView:(id)view;

/* instance methods */
- (id)init;

@end

#endif /* XPhotoEditorZoomTransition_h */
