//
#ifndef PTVActionSheetAction_h
#define PTVActionSheetAction_h
@import Foundation;

@class NSAttributedString, NSObject;

@interface PTVActionSheetAction : NSObject

@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) id /* block */ selectionBlock;
@property (readonly, nonatomic) _Bool shouldAutoDismiss;

/* instance methods */
- (id)initWithTitle:(id)title type:(long long)type selectionBlock:(id /* block */)block shouldAutoDismiss:(_Bool)dismiss;

@end

#endif /* PTVActionSheetAction_h */
