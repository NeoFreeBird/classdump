//
#ifndef GADWebViewConfiguration_h
#define GADWebViewConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@interface GADWebViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long dataDetectorType;
@property (readonly, nonatomic) long long preferredContentMode;
@property (readonly, nonatomic) unsigned long long mediaTypesRequiringUserAction;
@property (copy, nonatomic) NSString *MRAIDURLString;
@property (nonatomic) _Bool collectDynamicContentSize;
@property (nonatomic) _Bool scrollEnabled;
@property (retain, nonatomic) NSString *customUserAgent;
@property (readonly, nonatomic) _Bool resizeScriptEnabled;
@property (readonly, nonatomic) _Bool loadOnIframeScriptEnabled;
@property (readonly, nonatomic) _Bool suppressIncrementalRendering;
@property (readonly, nonatomic) long long inactiveSchedulingPolicy;
@property (readonly, nonatomic) _Bool mediaVisibilityControlsEnabled;
@property (nonatomic) _Bool omidJsSessionServiceEnabled;
@property (copy, nonatomic) NSString *contentURL;
@property (copy, nonatomic) NSString *omidCreativeType;
@property (readonly, nonatomic) NSArray *scriptConfigurations;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addScriptConfigurations:(id)configurations;

@end

#endif /* GADWebViewConfiguration_h */
