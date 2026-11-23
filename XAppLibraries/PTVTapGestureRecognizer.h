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
