//
#ifndef OCFComponent_h
#define OCFComponent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "OCFActionComponentData.h"
#include "OCFAlertExampleComponentData.h"
#include "OCFBooleanComponentData.h"
#include "OCFButtonComponentData.h"
#include "OCFButtonItemComponentData.h"
#include "OCFCardWrapperComponentData.h"
#include "OCFComponent-Protocol.h"
#include "OCFComponentData-Protocol.h"
#include "OCFImageComponentData.h"
#include "OCFInfoItemComponentData.h"
#include "OCFInlineCalloutComponentData.h"
#include "OCFInlineFeedbackComponentData.h"
#include "OCFInlineTooltipComponentData.h"
#include "OCFListComponentData.h"
#include "OCFMutableToggleWrapperComponentData.h"
#include "OCFProgressIndicatorComponentData.h"
#include "OCFSpacerComponentData.h"
#include "OCFStaticTextComponentData.h"
#include "OCFTextFieldComponentData.h"
#include "OCFToggleWrapperComponentData.h"
#include "OCFTweetComponentData.h"
#include "OCFUserComponentData.h"

@class NSObject, NSString, UIColor;

@interface OCFComponent : NSObject <NSMutableCopying, NSCopying, OCFComponent>

@property (readonly, nonatomic) OCFActionComponentData *actionData;
@property (readonly, nonatomic) OCFAlertExampleComponentData *alertExampleData;
@property (readonly, nonatomic) OCFBooleanComponentData *booleanData;
@property (readonly, nonatomic) OCFButtonComponentData *buttonData;
@property (readonly, nonatomic) OCFButtonItemComponentData *buttonItemData;
@property (readonly, nonatomic) OCFCardWrapperComponentData *cardWrapperData;
@property (readonly, nonatomic) OCFImageComponentData *imageData;
@property (readonly, nonatomic) OCFInfoItemComponentData *infoItemData;
@property (readonly, nonatomic) OCFInlineCalloutComponentData *inlineCalloutData;
@property (readonly, nonatomic) OCFInlineFeedbackComponentData *inlineFeedbackData;
@property (readonly, nonatomic) OCFInlineTooltipComponentData *inlineTooltipData;
@property (readonly, nonatomic) OCFListComponentData *listData;
@property (readonly, nonatomic) OCFProgressIndicatorComponentData *progressIndicatorData;
@property (readonly, nonatomic) OCFSpacerComponentData *spacerData;
@property (readonly, nonatomic) OCFStaticTextComponentData *staticTextData;
@property (readonly, nonatomic) OCFTextFieldComponentData *textFieldData;
@property (readonly, nonatomic) OCFToggleWrapperComponentData *toggleWrapperData;
@property (readonly, nonatomic) OCFMutableToggleWrapperComponentData *mutableToggleWrapperData;
@property (readonly, nonatomic) OCFTweetComponentData *tweetData;
@property (readonly, nonatomic) OCFUserComponentData *userData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<OCFComponentData> *data;
@property (retain, nonatomic) UIColor *debugBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)standardComponentVerticalSpacing;
+ (double)standardComponentHorizontalSpacing;
+ (id)componentsWithHeader:(id)header;
+ (id)buttonComponentWithNextLink:(id)link preferredSizeClass:(long long)_class style:(unsigned long long)style identifier:(id)identifier;
+ (id)buttonComponentWithSkipLink:(id)link preferredSizeClass:(long long)_class identifier:(id)identifier;
+ (id)buttonComponentWithButton:(id)button preferredSizeClass:(long long)_class identifier:(id)identifier;
+ (id)buttonComponentsWithButtons:(id)buttons preferredSizeClass:(long long)_class;
+ (id)imageComponentWithHeaderImage:(id)image identifier:(id)identifier;
+ (id)spacerComponentWithLength:(long long)length identifier:(id)identifier;
+ (id)staticTextComponentWithText:(id)text style:(long long)style identifier:(id)identifier;
+ (id)userComponentWithUser:(id)user caption:(id)caption identifier:(id)identifier;
+ (id)componentFromFactory:(Class)factory withDictionary:(id)dictionary error:(id *)error;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;
+ (id)componentTypeKey;
+ (long long)componentVersion;

/* instance methods */
- (id)settingsGroupData;
- (id)initWithIdentifier:(id)identifier data:(id)data;
- (id)initWithComponent:(id)component;
- (id)componentDictionaries;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* OCFComponent_h */
