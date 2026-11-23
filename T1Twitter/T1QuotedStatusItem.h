//
#ifndef T1QuotedStatusItem_h
#define T1QuotedStatusItem_h
@import Foundation;

@class NSObject, NSString, TFNTwitterStatus, UIColor;

@interface T1QuotedStatusItem : NSObject

@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (copy, nonatomic) UIColor *statusBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overrideContentEdgeInsets;
@property (nonatomic) _Bool shouldDisableStatusViewTapActions;

/* instance methods */
- (id)initWithStatus:(id)status scribeComponent:(id)component scribeElement:(id)element;
- (id)init;

@end

#endif /* T1QuotedStatusItem_h */
