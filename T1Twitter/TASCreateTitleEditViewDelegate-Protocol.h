//
#ifndef TASCreateTitleEditViewDelegate_Protocol_h
#define TASCreateTitleEditViewDelegate_Protocol_h
@import Foundation;

@protocol TASCreateTitleEditViewDelegate

@required

/* required instance methods */
- (void)createTitleEditViewDidBeginEditing:(id)editing;
- (void)createTitleEditViewDidChange:(id)change;

@optional

@end

#endif /* TASCreateTitleEditViewDelegate_Protocol_h */
