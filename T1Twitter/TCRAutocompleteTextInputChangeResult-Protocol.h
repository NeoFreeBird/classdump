//
#ifndef TCRAutocompleteTextInputChangeResult_Protocol_h
#define TCRAutocompleteTextInputChangeResult_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteTextInputChangeResult <NSObject>

@required

@property (nonatomic, readonly) _Bool textChanged;
@property (nonatomic, readonly) _Bool textChanged;
@property (nonatomic, readonly) _Bool selectedRangeChanged;
@property (nonatomic, readonly) _Bool selectedRangeChanged;

/* required instance methods */
- (_Bool)isTextChanged;
- (_Bool)isTextChanged;
- (_Bool)isSelectedRangeChanged;
- (_Bool)isSelectedRangeChanged;

@optional

@end

#endif /* TCRAutocompleteTextInputChangeResult_Protocol_h */
