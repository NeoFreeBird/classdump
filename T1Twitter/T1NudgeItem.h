//
#ifndef T1NudgeItem_h
#define T1NudgeItem_h
@import Foundation;

#include "T1NudgeContextViewModel.h"

@class NSObject, NSString;

@interface T1NudgeItem : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *condensedTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) T1NudgeContextViewModel *contextViewModel;
@property (copy, nonatomic) id /* block */ condensedSelectionAction;
@property (copy, nonatomic) id /* block */ contextAction;

/* instance methods */
- (id)initWithCondensedTitle:(id)title title:(id)title subtitle:(id)subtitle contextViewModel:(id)model style:(unsigned long long)style;

@end

#endif /* T1NudgeItem_h */
