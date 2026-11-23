//
#ifndef _TtC12MathJaxSwift24MMLInputProcessorOptions_h
#define _TtC12MathJaxSwift24MMLInputProcessorOptions_h
@import Foundation;

#include "_TtC12MathJaxSwift21InputProcessorOptions.h"
#include "_TtCC12MathJaxSwift24MMLInputProcessorOptions6Verify.h"
#include "_TtP12MathJaxSwift33MMLInputProcessorOptionsJSExports_-Protocol.h"

@class MathJaxSwift.MMLInputProcessorOptions.Verify, NSString, Swift.Bool, _$sSS, _$sySo7JSValueCSgXBSg;

@interface MathJaxSwift.MMLInputProcessorOptions : MathJaxSwift.InputProcessorOptions <MathJaxSwift.MMLInputProcessorOptionsJSExports> // (Swift)

@property (nonatomic, copy) NSString *parseAs;
@property (nonatomic) _Bool forceReparse;
@property (nonatomic, retain) id /* block */ parseError;
@property (nonatomic, retain) MathJaxSwift.MMLInputProcessorOptions.Verify *verify;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift24MMLInputProcessorOptions_h */
