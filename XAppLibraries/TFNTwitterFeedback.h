//
#ifndef TFNTwitterFeedback_h
#define TFNTwitterFeedback_h
@import Foundation;

#include "TFNTwitterDismissibleItem-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterFeedback : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) _Bool hasUndoAction;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *confirmation;
@property (readonly, nonatomic) NSString *actionURLString;
@property (readonly, weak, nonatomic) id <TFNTwitterDismissibleItem> dismissedItem;

/* instance methods */
- (id)init;
- (id)initWithType:(id)type prompt:(id)prompt confirmation:(id)confirmation;
- (id)initWithType:(id)type prompt:(id)prompt confirmation:(id)confirmation actionURLString:(id)urlstring hasUndoAction:(_Bool)action;
- (id)initWithType:(id)type prompt:(id)prompt confirmation:(id)confirmation actionURLString:(id)urlstring hasUndoAction:(_Bool)action dismissedItem:(id)item;
- (id)description;

@end

#endif /* TFNTwitterFeedback_h */
