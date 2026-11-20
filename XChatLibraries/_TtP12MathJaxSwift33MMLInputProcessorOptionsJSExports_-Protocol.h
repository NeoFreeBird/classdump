//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP12MathJaxSwift33MMLInputProcessorOptionsJSExports__Protocol_h
#define _TtP12MathJaxSwift33MMLInputProcessorOptionsJSExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"
#include "_TtCC12MathJaxSwift24MMLInputProcessorOptions6Verify.h"

@class NSString;

@protocol MathJaxSwift.MMLInputProcessorOptionsJSExports <JSExport>

@required

@property (nonatomic, copy) NSString *parseAs;
@property (nonatomic) _Bool forceReparse;
@property (nonatomic, retain) id /* block */ parseError;
@property (nonatomic, retain) MathJaxSwift.MMLInputProcessorOptions.Verify *verify;

@optional

@end

#endif /* _TtP12MathJaxSwift33MMLInputProcessorOptionsJSExports__Protocol_h */
