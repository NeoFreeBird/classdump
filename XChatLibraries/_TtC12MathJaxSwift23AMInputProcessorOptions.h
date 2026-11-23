//
#ifndef _TtC12MathJaxSwift23AMInputProcessorOptions_h
#define _TtC12MathJaxSwift23AMInputProcessorOptions_h
@import Foundation;

#include "_TtC12MathJaxSwift21InputProcessorOptions.h"
#include "_TtP12MathJaxSwift32AMInputProcessorOptionsJSExports_-Protocol.h"

@class NSString, Swift.Bool, _$sSS;

@interface MathJaxSwift.AMInputProcessorOptions : MathJaxSwift.InputProcessorOptions <MathJaxSwift.AMInputProcessorOptionsJSExports> // (Swift)

@property (nonatomic) _Bool fixphi;
@property (nonatomic) _Bool displaystyle;
@property (nonatomic, copy) NSString *decimalsign;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift23AMInputProcessorOptions_h */
