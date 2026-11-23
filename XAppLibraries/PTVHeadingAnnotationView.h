//
#ifndef PTVHeadingAnnotationView_h
#define PTVHeadingAnnotationView_h
@import Foundation;

@class MKAnnotationView, UIImageView;

@interface PTVHeadingAnnotationView : MKAnnotationView {
    /* instance variables */
    UIImageView *_headingImageView;
    UIImageView *_shadow;
    double _heading;
}

/* instance methods */
- (id)initWithAnnotation:(id)annotation heading:(double)heading reuseIdentifier:(id)identifier;
- (void)setHeading:(double)heading;
- (void)updateViewsForHeading;

@end

#endif /* PTVHeadingAnnotationView_h */
