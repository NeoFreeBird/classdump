//
#ifndef XPhotoEditorImageFramingFlowDelegate_Protocol_h
#define XPhotoEditorImageFramingFlowDelegate_Protocol_h
@import Foundation;

@protocol XPhotoEditorImageFramingFlowDelegate

@required

/* required instance methods */
- (void)imageFramingFlow:(id)flow didFinishWith:(id)with;
- (void)imageFramingFlowDidCancel:(id)cancel;

@optional

@end

#endif /* XPhotoEditorImageFramingFlowDelegate_Protocol_h */
