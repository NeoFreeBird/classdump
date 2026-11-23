//
#ifndef PollingCardProtocol_Protocol_h
#define PollingCardProtocol_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSString;

@protocol PollingCardProtocol <NSObject, NSCoding, TFSTwitterCore.TFSTwitterScribableItem>

@required

@property (nonatomic, readonly) _Bool hasUserInput;
@property (nonatomic, readonly) unsigned long long numberOfVisibleChoices;
@property (nonatomic, readonly) _Bool hasValidTextForSending;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSString *validationFailureReason;
@property (nonatomic, readonly) NSDictionary *choiceLabels;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *URI;
@property (nonatomic, copy) NSString *URI;
@property (nonatomic) double pollDuration;
@property (nonatomic) long long audienceType;
@property (nonatomic, readonly) _Bool isAudienceSelectionEnabled;

/* required instance methods */
- (id)initWithDuration:(double)duration isAudienceSelectionEnabled:(_Bool)enabled;
- (id)choiceForIndex:(unsigned long long)index;
- (id)choiceForIndex:(unsigned long long)index;
- (void)setChoice:(id)choice atIndex:(unsigned long long)index;
- (void)setChoice:(id)choice atIndex:(unsigned long long)index;
- (id)imageAssetForChoiceAtIndex:(unsigned long long)index;
- (id)imageAssetForChoiceAtIndex:(unsigned long long)index;
- (void)setImageAsset:(id)asset forChoiceAtIndex:(unsigned long long)index;
- (void)setImageAsset:(id)asset forChoiceAtIndex:(unsigned long long)index;
- (id)imageMediaIDForChoiceAtIndex:(unsigned long long)index;
- (id)imageMediaIDForChoiceAtIndex:(unsigned long long)index;
- (id)scribeItemString;

@optional

@end

#endif /* PollingCardProtocol_Protocol_h */
