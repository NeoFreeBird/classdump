//
#ifndef TFNFormFieldViewDelegate_Protocol_h
#define TFNFormFieldViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNFormFieldViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)formFieldViewContentSizeDidChange:(id)change;
- (void)formFieldView:(id)view didChangeText:(id)text fromText:(id)text;
- (void)formFieldViewDidBeginEditing:(id)editing;
- (void)formFieldViewDidEndEditing:(id)editing;
- (_Bool)formFieldViewShouldBeginEditing:(id)editing;
- (_Bool)formFieldViewShouldEndEditing:(id)editing;
- (_Bool)formFieldViewShouldReturn:(id)_return;
- (_Bool)formFieldViewShouldClear:(id)clear;

@end

#endif /* TFNFormFieldViewDelegate_Protocol_h */
