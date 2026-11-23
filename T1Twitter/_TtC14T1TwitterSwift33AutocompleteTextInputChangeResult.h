//
#ifndef _TtC14T1TwitterSwift33AutocompleteTextInputChangeResult_h
#define _TtC14T1TwitterSwift33AutocompleteTextInputChangeResult_h
@import Foundation;

#include "TCRAutocompleteTextInputChangeResult-Protocol.h"

@class NSObject, _$s17TwitterTextEditor0bC16ViewChangeResultMp;

@interface T1TwitterSwift.AutocompleteTextInputChangeResult : NSObject <TCRAutocompleteTextInputChangeResult> { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterTextEditor.TextEditorViewChangeResult changeResult;
}

@property (nonatomic, readonly) _Bool textChanged;
@property (nonatomic, readonly) _Bool selectedRangeChanged;

/* instance methods */
- (_Bool)isTextChanged;
- (_Bool)isSelectedRangeChanged;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift33AutocompleteTextInputChangeResult_h */
