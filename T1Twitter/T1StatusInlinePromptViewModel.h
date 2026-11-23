//
#ifndef T1StatusInlinePromptViewModel_h
#define T1StatusInlinePromptViewModel_h
@import Foundation;

@class NSAttributedString, NSObject, NSString;

@interface T1StatusInlinePromptViewModel : NSObject

@property (readonly, nonatomic) NSAttributedString *promptTextAttributedString;
@property (readonly, nonatomic) _Bool following;
@property (readonly, nonatomic) unsigned long long promptArrowDirection;
@property (readonly, nonatomic) NSString *normalActionButtonText;
@property (readonly, nonatomic) NSString *selectedActionButtonText;

/* instance methods */
- (id)initWithText:(id)text following:(_Bool)following promptArrowDirection:(unsigned long long)direction normalActionButtonText:(id)text selectedActionButtonText:(id)text;
- (id)init;
- (_Bool)isFollowing;

@end

#endif /* T1StatusInlinePromptViewModel_h */
