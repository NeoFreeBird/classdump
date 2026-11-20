//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
