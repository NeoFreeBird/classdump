//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LongPressGestureRecognizer_h
#define LongPressGestureRecognizer_h
@import Foundation;

@class NSString, UILongPressGestureRecognizer;

@interface LongPressGestureRecognizer : UILongPressGestureRecognizer

@property (weak, nonatomic) id /* block */ actionCallback;
@property (weak, nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action identifier:(id)identifier actionCallback:(id /* block */)callback;

@end

#endif /* LongPressGestureRecognizer_h */
