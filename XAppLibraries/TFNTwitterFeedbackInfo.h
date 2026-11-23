//
#ifndef TFNTwitterFeedbackInfo_h
#define TFNTwitterFeedbackInfo_h
@import Foundation;

#include "TFNTwitterFeedbackAction.h"
#include "TFNTwitterFeedbackDisplayContext.h"

@class NSArray, NSObject, NSString;

@interface TFNTwitterFeedbackInfo : NSObject

@property (nonatomic, readonly) TFNTwitterFeedbackAction *tipAction;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) TFNTwitterFeedbackDisplayContext *displayContext;
@property (readonly, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;

/* instance methods */
- (id)init;
- (id)initWithActions:(id)actions;
- (id)initWithActions:(id)actions displayContext:(id)context metadata:(id)metadata scribeComponent:(id)component scribeElement:(id)element;
- (id)description;

@end

#endif /* TFNTwitterFeedbackInfo_h */
