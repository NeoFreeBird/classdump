//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAutocompleteTextInputChangeObserver_Protocol_h
#define TCRAutocompleteTextInputChangeObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteTextInputChangeObserver <NSObject>

@required

/* required instance methods */
- (void)autocompleteTextInput:(id)input didChangeWithChangeResult:(id)result;

@optional

@end

#endif /* TCRAutocompleteTextInputChangeObserver_Protocol_h */
