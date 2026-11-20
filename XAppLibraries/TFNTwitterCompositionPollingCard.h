//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionPollingCard_h
#define TFNTwitterCompositionPollingCard_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "PollingCardProtocol-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSMutableArray, NSObject, NSString;

@interface TFNTwitterCompositionPollingCard : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSCoding, PollingCardProtocol>

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *validatedLabels;
@property (retain, nonatomic) NSMutableArray *imageAssets;
@property (readonly, nonatomic) _Bool hasUserInput;
@property (readonly, nonatomic) unsigned long long numberOfVisibleChoices;
@property (readonly, nonatomic) _Bool hasValidTextForSending;
@property (readonly, nonatomic) _Bool isValid;
@property (readonly, nonatomic) NSString *validationFailureReason;
@property (readonly, nonatomic) NSDictionary *choiceLabels;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *URI;
@property (nonatomic) double pollDuration;
@property (nonatomic) long long audienceType;
@property (readonly, nonatomic) _Bool isAudienceSelectionEnabled;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, copy, nonatomic) NSString *scribeItemDebugDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_whitespaceNewlineAndControlCharacterSet;

/* instance methods */
- (id)initWithDuration:(double)duration isAudienceSelectionEnabled:(_Bool)enabled;
- (id)init;
- (id)choiceForIndex:(unsigned long long)index;
- (void)setChoice:(id)choice atIndex:(unsigned long long)index;
- (id)imageAssetForChoiceAtIndex:(unsigned long long)index;
- (void)setImageAsset:(id)asset forChoiceAtIndex:(unsigned long long)index;
- (id)imageMediaIDForChoiceAtIndex:(unsigned long long)index;
- (id)_textOnlyValidationFailureReason;
- (_Bool)_hasTextFieldInput;
- (_Bool)_hasMediaIDsForAllValidChoices:(id)choices;
- (_Bool)_array:(id)_array containsMinimumNonEmptyStrings:(unsigned long long)strings;
- (unsigned long long)_numberOfNonEmptyStringsInArray:(id)array;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)scribeItemString;

@end

#endif /* TFNTwitterCompositionPollingCard_h */
