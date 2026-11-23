//
#ifndef TCRAutocompleteTextInput_Protocol_h
#define TCRAutocompleteTextInput_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TCRAutocompleteTextInputChangeObserver-Protocol.h"

@class NSString;

@protocol TCRAutocompleteTextInput <NSObject>

@required

@property (weak, nonatomic) id <TCRAutocompleteTextInputChangeObserver> changeObserver;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;

/* required instance methods */
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withReplacementText:(id)text;

@optional

@end

#endif /* TCRAutocompleteTextInput_Protocol_h */
