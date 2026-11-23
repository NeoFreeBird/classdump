//
#ifndef _TtC12MathJaxSwift11SafeOptions_h
#define _TtC12MathJaxSwift11SafeOptions_h
@import Foundation;

#include "_TtC12MathJaxSwift10SafeStyles.h"
#include "_TtC12MathJaxSwift12AllowOptions.h"
#include "_TtC12MathJaxSwift13SafeProtocols.h"
#include "_TtP12MathJaxSwift18SafeOptionsExports_-Protocol.h"

@class MathJaxSwift.AllowOptions, MathJaxSwift.SafeProtocols, MathJaxSwift.SafeStyles, NSArray, NSObject, NSString, _$sSS, _$sSaySdG, _$sSi;

@interface MathJaxSwift.SafeOptions : NSObject <MathJaxSwift.SafeOptionsExports> // (Swift)

@property (nonatomic) long long lengthMax;
@property (nonatomic, copy) NSArray *scriptsizemultiplierRange;
@property (nonatomic, copy) NSArray *scriptlevelRange;
@property (nonatomic, copy) NSString *classPattern;
@property (nonatomic, copy) NSString *idPattern;
@property (nonatomic, copy) NSString *dataPattern;
@property (nonatomic, retain) MathJaxSwift.AllowOptions *allowOptions;
@property (nonatomic, retain) MathJaxSwift.SafeProtocols *safeProtocols;
@property (nonatomic, retain) MathJaxSwift.SafeStyles *safeStyles;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift11SafeOptions_h */
