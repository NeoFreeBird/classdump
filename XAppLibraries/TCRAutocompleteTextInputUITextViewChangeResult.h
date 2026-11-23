//
#ifndef TCRAutocompleteTextInputUITextViewChangeResult_h
#define TCRAutocompleteTextInputUITextViewChangeResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TCRAutocompleteTextInputChangeResult-Protocol.h"

@class NSObject, NSString;

@interface TCRAutocompleteTextInputUITextViewChangeResult : NSObject <NSCopying, TCRAutocompleteTextInputChangeResult>

@property (nonatomic) _Bool textChanged;
@property (nonatomic) _Bool selectedRangeChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isTextChanged;
- (_Bool)isSelectedRangeChanged;

@end

#endif /* TCRAutocompleteTextInputUITextViewChangeResult_h */
