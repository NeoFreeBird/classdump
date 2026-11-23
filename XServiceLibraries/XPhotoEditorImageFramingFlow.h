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
