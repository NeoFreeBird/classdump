//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUIP33_6A5EBEDC6D3485641549218C2482F75B39ScheduleDescriptionEditorViewController_h
#define _TtC14CallScheduleUIP33_6A5EBEDC6D3485641549218C2482F75B39ScheduleDescriptionEditorViewController_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class _$s13XDesignSystem30StackTrayContentViewControllerCN;

@interface CallScheduleUI.(ScheduleDescriptionEditorViewController in _6A5EBEDC6D3485641549218C2482F75B) : type metadata for XDesignSystem.StackTrayContentViewController <UITextViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 textView;
    @40@0:8:16@24@32 placeholderLabel;
    @40@0:8:16@24@32 initialDescription;
    @40@0:8:16@24@32 onSave;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLayoutSubviews;
- (void)textViewDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUIP33_6A5EBEDC6D3485641549218C2482F75B39ScheduleDescriptionEditorViewController_h */
