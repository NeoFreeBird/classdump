//
#ifndef _TtC10TFNUISwift19LegacyTabGroupEntry_h
#define _TtC10TFNUISwift19LegacyTabGroupEntry_h
@import Foundation;

#include "_TtC10TFNUISwift19LegacyTabDescriptor.h"

@class NSObject, NSString, TFNUISwift.LegacyTabDescriptor, _$sSSSg;

@interface TFNUISwift.LegacyTabGroupEntry : NSObject // (Swift)

@property (nonatomic, readonly) TFNUISwift.LegacyTabDescriptor *descriptor;
@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) NSString *menuIconName;
@property (nonatomic, readonly) NSString *resolvedMenuTitle;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor menuTitle:(id)title menuIconName:(id)name;
- (id)init;

@end

#endif /* _TtC10TFNUISwift19LegacyTabGroupEntry_h */
