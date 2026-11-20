//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
