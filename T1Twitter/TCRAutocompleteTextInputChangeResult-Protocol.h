//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
