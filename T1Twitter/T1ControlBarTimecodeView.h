//
#ifndef T1ControlBarTimecodeView_h
#define T1ControlBarTimecodeView_h
@import Foundation;

@class TAVControlBarItem, TFNSolidColorView, UIImageView, UILabel;

@interface T1ControlBarTimecodeView : TAVControlBarItem

@property (retain, nonatomic) UIImageView *timecodeIconView;
@property (retain, nonatomic) UILabel *timecodeLabel;
@property (retain, nonatomic) TFNSolidColorView *timecodeContainerView;
@property (nonatomic) double timecode;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)_t1_updateTimecodeLabel;

@end

#endif /* T1ControlBarTimecodeView_h */
