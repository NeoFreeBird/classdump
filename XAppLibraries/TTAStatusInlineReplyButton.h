//
#ifndef TTAStatusInlineReplyButton_h
#define TTAStatusInlineReplyButton_h
@import Foundation;

#include "TTAStatusInlineActionButton.h"

@interface TTAStatusInlineReplyButton : TTAStatusInlineActionButton

@property (nonatomic) long long showDisabledEducationForReason;

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)actionSheetTitle;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (_Bool)shouldShowCount;
- (id)buttonImageNameForUIControlState:(unsigned long long)state buttonSize:(unsigned long long)size;

@end

#endif /* TTAStatusInlineReplyButton_h */
