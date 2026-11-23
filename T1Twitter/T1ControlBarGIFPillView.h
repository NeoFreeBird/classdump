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
