//
#ifndef TASTitleEditViewDelegate_Protocol_h
#define TASTitleEditViewDelegate_Protocol_h
@import Foundation;

@protocol TASTitleEditViewDelegate

@required

/* required instance methods */
- (void)titleEditViewDidBeginEditing:(id)editing;
- (void)titleEditViewDidChange:(id)change;
- (void)titleEditViewDidEndEditing:(id)editing;
- (void)titleEditView:(id)view didTapActiveTextRange:(id)range;

@optional

@end

#endif /* TASTitleEditViewDelegate_Protocol_h */
