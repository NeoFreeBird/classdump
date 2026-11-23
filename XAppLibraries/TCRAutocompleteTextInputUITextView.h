//
#ifndef TCRAutocompleteTextInputUITextView_h
#define TCRAutocompleteTextInputUITextView_h
@import Foundation;

#include "TCRAutocompleteTextInput-Protocol.h"
#include "TCRAutocompleteTextInputChangeObserver-Protocol.h"
#include "TCRAutocompleteTextInputUITextViewChangeResult.h"

@class NSObject, NSString, UITextView;

@interface TCRAutocompleteTextInputUITextView : NSObject <TCRAutocompleteTextInput>

@property (retain, nonatomic) TCRAutocompleteTextInputUITextViewChangeResult *latestChangeResult;
@property (readonly, nonatomic) UITextView *textView;
@property (weak, nonatomic) id <TCRAutocompleteTextInputChangeObserver> changeObserver;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTextView:(id)view;
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withReplacementText:(id)text;
- (void)textViewDidChange;
- (void)textViewDidChangeSelection;
- (void)discardPendingChange;
- (void)_tcr_main_scheduleAutocompleteTextInputDidChangeWithTextChanged:(_Bool)changed selectedRangeChanged:(_Bool)changed;
- (void)_tcr_main_performAutocompleteTextInputDidChange;

@end

#endif /* TCRAutocompleteTextInputUITextView_h */
