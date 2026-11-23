//
#ifndef TCRAutocompleteControllerDelegate_Protocol_h
#define TCRAutocompleteControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)autocompleteControllerDidBegin:(id)begin;
- (void)autocompleteControllerDidEnd:(id)end;
- (void)autocompleteController:(id)controller didReceiveResult:(id)result;

@end

#endif /* TCRAutocompleteControllerDelegate_Protocol_h */
