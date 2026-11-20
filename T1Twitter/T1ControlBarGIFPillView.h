//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ControlBarGIFPillView_h
#define T1ControlBarGIFPillView_h
@import Foundation;

@class TAVControlBarItem, TUIPillView;

@interface T1ControlBarGIFPillView : TAVControlBarItem

@property (retain, nonatomic) TUIPillView *pillView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;

@end

#endif /* T1ControlBarGIFPillView_h */
