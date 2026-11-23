//
#ifndef TFNInlineCalloutConfiguration_h
#define TFNInlineCalloutConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNInlineCalloutThumbnailConfig.h"

@class NSObject, NSString, UIColor;

@interface TFNInlineCalloutConfiguration : NSObject <NSCopying> // (Swift)

@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *headline;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, copy) id /* block */ linkAction;
@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (nonatomic, copy) NSString *customIconName;
@property (nonatomic, retain) TFNInlineCalloutThumbnailConfig *iconThumbnailConfiguration;

/* instance methods */
- (id)initWithStyle:(long long)style headline:(id)headline body:(id)body linkText:(id)text linkAction:(id /* block */)action customBackgroundColor:(id)color customIconName:(id)name iconThumbnailConfiguration:(id)configuration;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineCalloutConfiguration_h */
