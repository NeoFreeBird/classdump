//
#ifndef TASToggleViewDelegate_Protocol_h
#define TASToggleViewDelegate_Protocol_h
@import Foundation;

@protocol TASToggleViewDelegate

@required

/* required instance methods */
- (void)toggleView:(id)view didTapInfoButton:(id)button;
- (void)toggleView:(id)view didToggleSwitch:(id)_switch;

@optional

@end

#endif /* TASToggleViewDelegate_Protocol_h */
