//
#ifndef TFNInlineFeedbackConfiguration_h
#define TFNInlineFeedbackConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNInlineFeedbackConfirmationStateConfiguration.h"
#include "TFNInlineFeedbackFeedbackStateConfiguration.h"
#include "TFNSwiftUIComponentRepresentableViewFactory-Protocol.h"

@class NSObject;

@interface TFNInlineFeedbackConfiguration : NSObject <TFNSwiftUIComponentRepresentableViewFactory, NSCopying> // (Swift)

@property (nonatomic, retain) TFNInlineFeedbackFeedbackStateConfiguration *feedbackStateConfiguration;
@property (nonatomic, retain) TFNInlineFeedbackConfirmationStateConfiguration *confirmationStateConfiguration;
@property (nonatomic) long long style;
@property (nonatomic) long long sizeClass;
@property (nonatomic) long long state;
@property (nonatomic) long long feedbackType;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)feedback:(id)feedback subtitle:(id)subtitle style:(long long)style buttonType:(id)type sizeClass:(long long)_class feedbackUpdateHandler:(id /* block */)handler confirmationStateConfiguration:(id)configuration;
+ (id)confirmation:(id)confirmation style:(long long)style sizeClass:(long long)_class;

/* instance methods */
- (id)makeSwiftUIRepresentedView;
- (id)initWithFeedbackStateConfiguration:(id)configuration confirmationStateConfiguration:(id)configuration style:(long long)style sizeClass:(long long)_class state:(long long)state feedbackType:(long long)type;
- (id)init;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNInlineFeedbackConfiguration_h */
