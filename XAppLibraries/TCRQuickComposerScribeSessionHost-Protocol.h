//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRQuickComposerScribeSessionHost_Protocol_h
#define TCRQuickComposerScribeSessionHost_Protocol_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TFNTwitterComposition.h"

@class NSString;

@protocol TCRQuickComposerScribeSessionHost

@required

@property (nonatomic, readonly) NSString *quickComposerScribeComponent;
@property (nonatomic, readonly) NSString *quickComposerScribePage;
@property (nonatomic, readonly) NSString *quickComposerScribeSurface;
@property (nonatomic, readonly) TFNTwitterAccount *quickComposerScribeAccount;
@property (nonatomic, readonly) TFNTwitterComposition *quickComposerScribeComposition;
@property (nonatomic, readonly) _Bool isQuickComposerBarOnScreen;

/* required instance methods */
- (void)quickComposerScribeSessionBarDidAppear;

@optional

@end

#endif /* TCRQuickComposerScribeSessionHost_Protocol_h */
