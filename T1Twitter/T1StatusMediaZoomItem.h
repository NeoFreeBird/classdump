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
