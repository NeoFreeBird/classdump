//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15PollCardCompose28PollCardComposeConfiguration_h
#define _TtC15PollCardCompose28PollCardComposeConfiguration_h
@import Foundation;

#include "PollingCardProtocol-Protocol.h"

@class NSDictionary, NSObject, NSString, Swift.Bool, _$sSSSg, _$sSaySSG, _$sSd, __C.TFNTwitterCompositionPollingCardAudienceType;

@interface PollCardCompose.PollCardComposeConfiguration : NSObject <PollingCardProtocol> { // (Swift)
    /* instance variables */
    Swift.String? uri;
    [Swift.String] labels;
    [Swift.String] validatedLabels;
}

@property (nonatomic, copy) NSString *URI;
@property (nonatomic, readonly) _Bool hasValidTextForSending;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSString *validationFailureReason;
@property (nonatomic) double pollDuration;
@property (nonatomic) long long audienceType;
@property (nonatomic, readonly) _Bool isAudienceSelectionEnabled;
@property (nonatomic, readonly) _Bool hasUserInput;
@property (nonatomic, readonly) unsigned long long numberOfVisibleChoices;
@property (nonatomic, readonly) NSDictionary *choiceLabels;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;

/* instance methods */
- (id)initWithDuration:(double)duration isAudienceSelectionEnabled:(_Bool)enabled;
- (id)init;
- (id)choiceForIndex:(unsigned long long)index;
- (void)setChoice:(id)choice atIndex:(unsigned long long)index;
- (id)imageAssetForChoiceAtIndex:(unsigned long long)index;
- (void)setImageAsset:(id)asset forChoiceAtIndex:(unsigned long long)index;
- (id)imageMediaIDForChoiceAtIndex:(unsigned long long)index;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)scribeItemString;

@end

#endif /* _TtC15PollCardCompose28PollCardComposeConfiguration_h */
