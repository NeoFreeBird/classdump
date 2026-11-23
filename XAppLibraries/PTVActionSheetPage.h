//
#ifndef PTVActionSheetPage_h
#define PTVActionSheetPage_h
@import Foundation;

#include "PTVActionSheetAction.h"

@class NSArray, NSAttributedString, NSMutableArray, NSObject, NSString;

@interface PTVActionSheetPage : NSObject {
    /* instance variables */
    NSMutableArray *_mutableActions;
}

@property (copy, nonatomic) NSAttributedString *messageAttributedString;
@property (copy, nonatomic) NSString *messageString;
@property (readonly, copy, nonatomic) NSArray *buttonActions;
@property (readonly, nonatomic) PTVActionSheetAction *dismissAction;

/* instance methods */
- (id)init;
- (void)addActionWithAttributedTitle:(id)title type:(long long)type selectionBlock:(id /* block */)block shouldAutoDismiss:(_Bool)dismiss;
- (void)addAction:(id)action;

@end

#endif /* PTVActionSheetPage_h */
