//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAutocompleteTextInput_Protocol_h
#define TCRAutocompleteTextInput_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TCRAutocompleteTextInputChangeObserver-Protocol.h"

@class NSString;

@protocol TCRAutocompleteTextInput <NSObject>

@required

@property (nonatomic, weak) id <TCRAutocompleteTextInputChangeObserver> changeObserver;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;

/* required instance methods */
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withReplacementText:(id)text;
- (void)updateTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withReplacementText:(id)text;

@optional

@end

#endif /* TCRAutocompleteTextInput_Protocol_h */
