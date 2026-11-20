//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
