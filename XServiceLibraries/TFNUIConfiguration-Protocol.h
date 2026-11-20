//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNUIConfiguration_Protocol_h
#define TFNUIConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNUIColorPalette-Protocol.h"
#include "TFNUIFontGroup-Protocol.h"

@class NSString;
@protocol TFNUIScribeConstants;

@protocol TFNUIConfiguration <NSObject>

@required

@property (readonly, nonatomic) NSString *lastUsedAccountID;
@property (readonly, nonatomic) id <TFNUIColorPalette> colorPalette;
@property (readonly, nonatomic) id <TFNUIFontGroup> fontGroup;
@property (readonly, nonatomic) id <TFNUIScribeConstants> scribeConstants;
@property (readonly, nonatomic) _Bool isHashtagPronounciationAllowed;
@property (readonly, nonatomic) _Bool isReduceMotionSettingEnabled;

/* required instance methods */
- (void)setupAppearance;
- (void)didCreateWindow:(id)window;
- (id)featureSwitchProviderForAccountID:(id)id;
- (id)scribeSinkForAccountID:(id)id;
- (id)scribeSinkForViewController:(id)controller;
- (id)scribeContextForViewController:(id)controller;

@optional

@end

#endif /* TFNUIConfiguration_Protocol_h */
