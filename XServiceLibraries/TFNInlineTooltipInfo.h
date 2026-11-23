//
#ifndef TFNInlineTooltipInfo_h
#define TFNInlineTooltipInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNInlineTooltipConfiguration.h"

@class NSObject;

@interface TFNInlineTooltipInfo : NSObject <NSCopying> // (Swift)

@property (nonatomic, readonly) TFNInlineTooltipConfiguration *inlineTooltipConfiguration;
@property (nonatomic, readonly) long long anchorFocusView;
@property (nonatomic, readonly) _Bool isClosed;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithInlineTooltipConfiguration:(id)configuration anchorFocusView:(long long)view isClosed:(_Bool)closed;
- (id)initWithInlineTooltipConfiguration:(id)configuration anchorFocusView:(long long)view;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineTooltipInfo_h */
