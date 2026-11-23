//
#ifndef TASTitleEditView_h
#define TASTitleEditView_h
@import Foundation;

#include "TASTitleEditViewDelegate-Protocol.h"
#include "TFNCircularCountProgressDataSource-Protocol.h"

@class NSString, UIView;

@interface TASTitleEditView : UIView <TFNCircularCountProgressDataSource> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 characterCountLimit;
    @40@0:8:16@24@32 characterCountWarningLimit;
    @40@0:8:16@24@32 textView;
    @40@0:8:16@24@32 editButton;
    @40@0:8:16@24@32 textViewStackView;
    @40@0:8:16@24@32 textEditorView;
    @40@0:8:16@24@32 progressView;
    @40@0:8:16@24@32 textEditorViewStackView;
}

@property (nonatomic, weak) id <TASTitleEditViewDelegate> delegate;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) _Bool isEditable;
@property (nonatomic) long long narrowCastType;
@property (nonatomic, readonly) UIView *inputAccessoryView;

/* instance methods */
- (long long)currentCharacterCountForCircularCountProgressView:(id)view;
- (long long)remainingCharacterCountForCircularCountProgressView:(id)view;
- (long long)warningCharacterLimitForCircularCountProgressView:(id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapEditButton:(id)button;
- (void)beginEditingTitle;

@end

#endif /* TASTitleEditView_h */
