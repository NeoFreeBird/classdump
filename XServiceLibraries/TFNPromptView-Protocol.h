//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptView_Protocol_h
#define TFNPromptView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNPromptContentViewSpec.h"
#include "TFNPromptImageSpec.h"
#include "TFNPromptTextSpec.h"

@class NSArray, UIColor;

@protocol TFNPromptView <NSObject>

@required

@optional

@property (readonly, nonatomic) UIColor *promptChromeColor;
@property (retain, nonatomic) TFNPromptImageSpec *imageSpec;
@property (retain, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (retain, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (retain, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (retain, nonatomic) NSArray *buttonSpecs;
@property (nonatomic) _Bool excludedFromVDLLeftAlign;

/* optional instance methods */
- (void)setShowDismissOption:(_Bool)option action:(id /* block */)action initialization:(id /* block */)initialization;
- (void)setShowLogo:(_Bool)logo;
- (_Bool)isExcludedFromVDLLeftAlign;

@end

#endif /* TFNPromptView_Protocol_h */
