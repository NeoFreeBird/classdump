//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSButtonConfiguration_h
#define XDSButtonConfiguration_h
@import Foundation;

#include "XDSButtonContent.h"
#include "XDSButtonDisplayStyle.h"
#include "XDSButtonSizeClass.h"

@class NSObject, NSString;

@interface XDSButtonConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cornerShape;
    B24@0:8@"NSString"16 interaction;
    B24@0:8@"NSString"16 tapHaptic;
    B24@0:8@"NSString"16 badge;
}

@property (nonatomic, readonly) XDSButtonSizeClass *size;
@property (nonatomic, readonly) XDSButtonDisplayStyle *style;
@property (nonatomic, readonly) XDSButtonContent *content;
@property (nonatomic, readonly) long long availability;
@property (nonatomic, readonly) NSString *accessibilityLabelOverride;
@property (nonatomic, readonly) NSString *accessibilityHintOverride;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonConfiguration_h */
