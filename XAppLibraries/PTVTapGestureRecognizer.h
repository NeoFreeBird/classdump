//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTapGestureRecognizer_h
#define PTVTapGestureRecognizer_h
@import Foundation;

@class UITapGestureRecognizer;

@interface PTVTapGestureRecognizer : UITapGestureRecognizer

/* instance methods */
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;

@end

#endif /* PTVTapGestureRecognizer_h */
