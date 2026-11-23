//
#ifndef TCRAutocompleteTextInputChangeObserver_Protocol_h
#define TCRAutocompleteTextInputChangeObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteTextInputChangeObserver <NSObject>

@required

/* required instance methods */
- (void)autocompleteTextInput:(id)input didChangeWithChangeResult:(id)result;
- (void)autocompleteTextInput:(id)input didChangeWithChangeResult:(id)result;

@optional

@end

#endif /* TCRAutocompleteTextInputChangeObserver_Protocol_h */
