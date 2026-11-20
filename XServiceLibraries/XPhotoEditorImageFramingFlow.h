//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XPhotoEditorImageFramingFlow_h
#define XPhotoEditorImageFramingFlow_h
@import Foundation;

@class NSObject;

@interface XPhotoEditorImageFramingFlow : NSObject // (Swift)

/* class methods */
+ (id)makeWithImage:(id)image cropShape:(long long)shape delegate:(id)delegate;

/* instance methods */
- (id)init;

@end

#endif /* XPhotoEditorImageFramingFlow_h */
