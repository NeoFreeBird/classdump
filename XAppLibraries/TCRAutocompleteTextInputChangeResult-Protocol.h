//
#ifndef TCRAutocompleteTextInputChangeResult_Protocol_h
#define TCRAutocompleteTextInputChangeResult_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteTextInputChangeResult <NSObject>

@required

@property (readonly, nonatomic) _Bool textChanged;
@property (readonly, nonatomic) _Bool selectedRangeChanged;

/* required instance methods */
- (_Bool)isTextChanged;
- (_Bool)isSelectedRangeChanged;

@optional

@end

#endif /* TCRAutocompleteTextInputChangeResult_Protocol_h */
