//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormFieldCellDelegate_Protocol_h
#define TFNLegacyFormFieldCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLegacyFormFieldCellDelegate <NSObject>

@required

/* required instance methods */
- (void)formFieldCellTextFieldDidBeginEditing:(id)editing;
- (void)formFieldCell:(id)cell textField:(id)field didChangeText:(id)text;
- (void)formFieldCell:(id)cell textFieldDidEndEditingValid:(_Bool)valid;
- (_Bool)formFieldCell:(id)cell textFieldShouldReturn:(id)_return;
- (void)formFieldCell:(id)cell willAnimateToShowError:(_Bool)error;
- (_Bool)formFieldCellShouldShowRequiredHint:(id)hint;
- (_Bool)formFieldCellShouldAnimateHighlight:(id)highlight;
- (_Bool)formFieldCellShouldBecomeFirstResponderOnAppearance:(id)appearance;
- (double)formFieldCell:(id)cell maximumWidthForTitleAtIndexPath:(id)path;

@optional

@end

#endif /* TFNLegacyFormFieldCellDelegate_Protocol_h */
