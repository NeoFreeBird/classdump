//
#ifndef PTVNoHeadingAnnotationView_h
#define PTVNoHeadingAnnotationView_h
@import Foundation;

#include "PTVHeadingAnnotationView.h"

@interface PTVNoHeadingAnnotationView : PTVHeadingAnnotationView

/* instance methods */
- (id)initWithAnnotation:(id)annotation heading:(double)heading reuseIdentifier:(id)identifier;

@end

#endif /* PTVNoHeadingAnnotationView_h */
