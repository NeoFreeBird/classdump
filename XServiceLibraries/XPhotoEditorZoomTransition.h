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
