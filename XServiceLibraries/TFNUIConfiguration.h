//
#ifndef TFNUIConfiguration_h
#define TFNUIConfiguration_h
@import Foundation;

#include "TFNUIColorPalette-Protocol.h"
#include "TFNUIConfiguration-Protocol.h"
#include "TFNUIFontGroup-Protocol.h"

@class NSObject, NSString;
@protocol TFNUIScribeConstants;

@interface TFNUIConfiguration : NSObject <TFNUIConfiguration>

@property (readonly, nonatomic) NSString *lastUsedAccountID;
@property (readonly, nonatomic) id <TFNUIColorPalette> colorPalette;
@property (readonly, nonatomic) id <TFNUIFontGroup> fontGroup;
@property (readonly, nonatomic) id <TFNUIScribeConstants> scribeConstants;
@property (readonly, nonatomic) _Bool isHashtagPronounciationAllowed;
@property (readonly, nonatomic) _Bool isReduceMotionSettingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)currentConfiguration;
+ (void)setCurrentConfiguration:(id)configuration;

/* instance methods */
- (void)setupAppearance;
- (void)didCreateWindow:(id)window;
- (id)featureSwitchProviderForAccountID:(id)id;
- (id)scribeSinkForAccountID:(id)id;
- (id)scribeSinkForViewController:(id)controller;
- (id)scribeContextForViewController:(id)controller;

@end

#endif /* TFNUIConfiguration_h */
