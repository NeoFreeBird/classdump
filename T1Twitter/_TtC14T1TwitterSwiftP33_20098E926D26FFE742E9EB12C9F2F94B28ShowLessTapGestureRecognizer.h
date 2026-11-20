//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_20098E926D26FFE742E9EB12C9F2F94B28ShowLessTapGestureRecognizer_h
#define _TtC14T1TwitterSwiftP33_20098E926D26FFE742E9EB12C9F2F94B28ShowLessTapGestureRecognizer_h
@import Foundation;

@class UITapGestureRecognizer;

@interface T1TwitterSwift.(ShowLessTapGestureRecognizer in _20098E926D26FFE742E9EB12C9F2F94B) : UITapGestureRecognizer { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *acceptsTouch;
    NSNumber"16@0:8 *onPressChange;
    NSNumber"16@0:8 *onTap;
    NSNumber"16@0:8 *trackedTouchBeganUptime;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (_Bool)shouldReceiveEvent:(id)event;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)reset;
- (void)recognize;

@end

#endif /* _TtC14T1TwitterSwiftP33_20098E926D26FFE742E9EB12C9F2F94B28ShowLessTapGestureRecognizer_h */
