//
#ifndef _TtC12MathJaxSwift19MenuOptionsSettings_h
#define _TtC12MathJaxSwift19MenuOptionsSettings_h
@import Foundation;

#include "_TtP12MathJaxSwift26MenuOptionsSettingsExports_-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSS, _$sSd;

@interface MathJaxSwift.MenuOptionsSettings : NSObject <MathJaxSwift.MenuOptionsSettingsExports> // (Swift)

@property (nonatomic) _Bool texHints;
@property (nonatomic) _Bool semantics;
@property (nonatomic, copy) NSString *zoom;
@property (nonatomic, copy) NSString *zscale;
@property (nonatomic, copy) NSString *renderer;
@property (nonatomic) _Bool alt;
@property (nonatomic) _Bool cmd;
@property (nonatomic) _Bool ctrl;
@property (nonatomic) _Bool shift;
@property (nonatomic) double scale;
@property (nonatomic) _Bool inTabOrder;
@property (nonatomic) _Bool assistiveMml;
@property (nonatomic) _Bool collapsible;
@property (nonatomic) _Bool explorer;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift19MenuOptionsSettings_h */
