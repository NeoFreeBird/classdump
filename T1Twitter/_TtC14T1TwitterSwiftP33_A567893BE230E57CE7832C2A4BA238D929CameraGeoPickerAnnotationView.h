//
#ifndef _TtC14T1TwitterSwiftP33_A567893BE230E57CE7832C2A4BA238D929CameraGeoPickerAnnotationView_h
#define _TtC14T1TwitterSwiftP33_A567893BE230E57CE7832C2A4BA238D929CameraGeoPickerAnnotationView_h
@import Foundation;

@class MKAnnotationView;

@interface T1TwitterSwift.(CameraGeoPickerAnnotationView in _A567893BE230E57CE7832C2A4BA238D9) : MKAnnotationView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *animating;
    NSNumber"16@0:8 *circleView;
    NSNumber"16@0:8 *circleContainerView;
    NSNumber"16@0:8 *pulsingView;
    NSNumber"16@0:8 *pulsingCircleLayer;
}

/* instance methods */
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)appDidBecomeActive;

@end

#endif /* _TtC14T1TwitterSwiftP33_A567893BE230E57CE7832C2A4BA238D929CameraGeoPickerAnnotationView_h */
