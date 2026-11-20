//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusMediaZoomItem_h
#define T1StatusMediaZoomItem_h
@import Foundation;

@class NSObject, NSString, TFCImageSpec, TFSTwitterEntityURL, UIImage;

@interface T1StatusMediaZoomItem : NSObject

@property (copy, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) UIImage *previewImage;
@property (nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (retain, nonatomic) id transitionObject;
@property (retain, nonatomic) TFSTwitterEntityURL *entityURL;
@property (retain, nonatomic) TFCImageSpec *imageSpec;

/* instance methods */

@end

#endif /* T1StatusMediaZoomItem_h */
